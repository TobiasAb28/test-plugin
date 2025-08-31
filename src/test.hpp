#pragma once
#include "godot_cpp/classes/node.hpp"
#include "godot_cpp/classes/wrapped.hpp"

using namespace godot;

class Test : public Node{
    GDCLASS(Test, Node)
protected:
static void _bind_methods();

private:
    String my_data = "Seguime la corriente";

    String get_my_data() const;
    void set_my_data(const String &new_data);

    void say_hello();
};



