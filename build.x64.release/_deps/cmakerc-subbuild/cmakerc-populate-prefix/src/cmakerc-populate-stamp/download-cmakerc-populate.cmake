# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

function(check_file_hash has_hash hash_is_good)
  if("${has_hash}" STREQUAL "")
    message(FATAL_ERROR "has_hash Can't be empty")
  endif()

  if("${hash_is_good}" STREQUAL "")
    message(FATAL_ERROR "hash_is_good Can't be empty")
  endif()

  if("SHA512" STREQUAL "")
    # No check
    set("${has_hash}" FALSE PARENT_SCOPE)
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    return()
  endif()

  set("${has_hash}" TRUE PARENT_SCOPE)

  message(STATUS "verifying file...
       file='/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz'")

  file("SHA512" "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz" actual_value)

  if(NOT "${actual_value}" STREQUAL "cb69ff4545065a1a89e3a966e931a58c3f07d468d88ecec8f00da9e6ce3768a41735a46fc71af56e0753926371d3ca5e7a3f2221211b4b1cf634df860c2c997f")
    set("${hash_is_good}" FALSE PARENT_SCOPE)
    message(STATUS "SHA512 hash of
    /workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz
  does not match expected value
    expected: 'cb69ff4545065a1a89e3a966e931a58c3f07d468d88ecec8f00da9e6ce3768a41735a46fc71af56e0753926371d3ca5e7a3f2221211b4b1cf634df860c2c997f'
      actual: '${actual_value}'")
  else()
    set("${hash_is_good}" TRUE PARENT_SCOPE)
  endif()
endfunction()

function(sleep_before_download attempt)
  if(attempt EQUAL 0)
    return()
  endif()

  if(attempt EQUAL 1)
    message(STATUS "Retrying...")
    return()
  endif()

  set(sleep_seconds 0)

  if(attempt EQUAL 2)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 3)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 4)
    set(sleep_seconds 15)
  elseif(attempt EQUAL 5)
    set(sleep_seconds 60)
  elseif(attempt EQUAL 6)
    set(sleep_seconds 90)
  elseif(attempt EQUAL 7)
    set(sleep_seconds 300)
  else()
    set(sleep_seconds 1200)
  endif()

  message(STATUS "Retry after ${sleep_seconds} seconds (attempt #${attempt}) ...")

  execute_process(COMMAND "${CMAKE_COMMAND}" -E sleep "${sleep_seconds}")
endfunction()

if("/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if("https://github.com/vector-of-bool/cmrc/archive/refs/tags/2.0.1.tar.gz" STREQUAL "")
  message(FATAL_ERROR "REMOTE can't be empty")
endif()

if(EXISTS "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz")
  check_file_hash(has_hash hash_is_good)
  if(has_hash)
    if(hash_is_good)
      message(STATUS "File already exists and hash match (skip download):
  file='/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz'
  SHA512='cb69ff4545065a1a89e3a966e931a58c3f07d468d88ecec8f00da9e6ce3768a41735a46fc71af56e0753926371d3ca5e7a3f2221211b4b1cf634df860c2c997f'"
      )
      return()
    else()
      message(STATUS "File already exists but hash mismatch. Removing...")
      file(REMOVE "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz")
    endif()
  else()
    message(STATUS "File already exists but no hash specified (use URL_HASH):
  file='/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz'
Old file will be removed and new file downloaded from URL."
    )
    file(REMOVE "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz")
  endif()
endif()

set(retry_number 5)

message(STATUS "Downloading...
   dst='/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz'
   timeout='none'"
)

foreach(i RANGE ${retry_number})
  sleep_before_download(${i})

  foreach(url https://github.com/vector-of-bool/cmrc/archive/refs/tags/2.0.1.tar.gz)
    message(STATUS "Using src='${url}'")

    
    
    
    

    file(
        DOWNLOAD
        "${url}" "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz"
        SHOW_PROGRESS
        # no TIMEOUT
        STATUS status
        LOG log
        
        
    )

    list(GET status 0 status_code)
    list(GET status 1 status_string)

    if(status_code EQUAL 0)
      check_file_hash(has_hash hash_is_good)
      if(has_hash AND NOT hash_is_good)
        message(STATUS "Hash mismatch, removing...")
        file(REMOVE "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-subbuild/cmakerc-populate-prefix/src/2.0.1.tar.gz")
      else()
        message(STATUS "Downloading... done")
        return()
      endif()
    else()
      string(APPEND logFailedURLs "error: downloading '${url}' failed
       status_code: ${status_code}
       status_string: ${status_string}
       log:
       --- LOG BEGIN ---
       ${log}
       --- LOG END ---
       "
      )
    endif()
  endforeach()
endforeach()

message(FATAL_ERROR "Each download failed!
  ${logFailedURLs}
  "
)
