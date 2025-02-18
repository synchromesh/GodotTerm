# SPDX-License-Identifier: Unlicense
# CMakeLists.txt for GodotTerm/src.
# File Created: 12 February 2025

target_sources( ${PROJECT_NAME}
    PRIVATE
        GodotTerm.h
        GodotTerm.cpp
        RegisterExtension.cpp
)

target_include_directories( ${PROJECT_NAME}
    PRIVATE
        "src"
)

# End of CMakeLists.txt
