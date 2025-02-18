/* GodotTerm.cpp - Steel Bank Common Lisp as a Godot Engine extension.
 * File Created: 6 January 2025
 * Author: John Pallister <john@synchromesh.com>
 * Ref: https://github.com/asmaloney/GDExtensionTemplate
 * Ref: https://docs.godotengine.org/en/latest/tutorials/scripting/gdextension/gdextension_cpp_example.html#creating-a-simple-plugin
 *
 */

/// @file
/// GodotTerm implementation.

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/version.hpp>

#include "GodotTerm.h"
#include "Version.h"

using namespace godot;

/*!
@brief Get the version string for the GodotTerm extension.

@details
The version string is generated by cmake using src/Version.h.in.

It uses the form "<project name> <last tag>-<# commits since last tag>-<short commit hash>".
If there are no commits since the last tag, only the tag is shown.

@return The version string (e.g. "GodotTerm v1.2.3-gdedbd01").
*/
String GodotTerm::version() {
    return VersionInfo::VERSION_STR.data();
}

/*!
@brief Get the godot-cpp version string for this extension.

@details
The version string is generated using godot-cpp's core/version.hpp.

@return The version string (e.g. "godot-cpp v4.2.0-stable").
*/
String GodotTerm::godotCppVersion() {
	return "godot-cpp v" + uitos(GODOT_VERSION_MAJOR) + "."
		+ uitos(GODOT_VERSION_MINOR) + "." + uitos(GODOT_VERSION_PATCH) + "-"
		+ GODOT_VERSION_STATUS;
}

void GodotTerm::_bind_methods() {
	ClassDB::bind_static_method("GodotTerm", D_METHOD("version"),
															&/*GodotTerm::*/version);
	ClassDB::bind_static_method("GodotTerm", D_METHOD("godot_cpp_version"),
															&/*GodotTerm::*/godotCppVersion);
}

//GodotTerm::GodotTerm() { }
//GodotTerm::~GodotTerm() { }

/*** End of GodotTerm.cpp ***/
