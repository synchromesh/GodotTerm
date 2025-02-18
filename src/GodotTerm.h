/* GodotTerm.h - Steel Bank Common Lisp as a Godot Engine extension.
 * File Created: 6 January 2025
 * Author: John Pallister <john@synchromesh.com>
 * Ref: https://github.com/asmaloney/GDExtensionTemplate
 * Ref: https://docs.godotengine.org/en/latest/tutorials/scripting/gdextension/gdextension_cpp_example.html#creating-a-simple-plugin
 *
 */

#pragma once
#ifndef GODOTTERM_H
#define GODOTTERM_H

#include <godot_cpp/classes/object.hpp>

class GodotTerm : public godot::Object {
	GDCLASS( GodotTerm, godot::Object )

protected:
	static void _bind_methods();

public:
	static godot::String version();
	static godot::String godotCppVersion();

	//GodotTerm();
	//~GodotTerm();
};

#endif

/*** End of GodotTerm.h ***/
