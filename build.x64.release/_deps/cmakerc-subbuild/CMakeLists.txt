# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(cmakerc-populate NONE)

include(ExternalProject)
ExternalProject_Add(cmakerc-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/vector-of-bool/cmrc/archive/refs/tags/2.0.1.tar.gz" "URL_HASH" "SHA512=cb69ff4545065a1a89e3a966e931a58c3f07d468d88ecec8f00da9e6ce3768a41735a46fc71af56e0753926371d3ca5e7a3f2221211b4b1cf634df860c2c997f"
                    SOURCE_DIR          "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-src"
                    BINARY_DIR          "/workspaces/GHA_Binary_Caching/build.x64.release/_deps/cmakerc-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
