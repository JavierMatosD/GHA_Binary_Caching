# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(fmt-populate NONE)

include(ExternalProject)
ExternalProject_Add(fmt-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/fmtlib/fmt/archive/refs/tags/9.1.0.tar.gz" "URL_HASH" "SHA512=a18442042722dd48e20714ec034a12fcc0576c9af7be5188586970e2edf47529825bdc99af366b1d5891630c8dbf6f63bfa9f012e77ab3d3ed80d1a118e3b2be"
                    SOURCE_DIR          "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/fmt-src"
                    BINARY_DIR          "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/fmt-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
