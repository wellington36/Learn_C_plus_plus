#include <iostream>

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red};


int main() {
    // Enumerations

    Color col = Color::red;
    Traffic_light light = Traffic_light::red;

    // Color x = red;                 error: which red?
    // Color y = Traffic_light::red;  error: that red is not a Color
    Color z = Color::red;

    Color x = Color{5};     // Ok, but verbose
    Color y {6};            // also OK

    Traffic_light& operator++(Traffic_light& t) {
        // prefix increment: ++
    
        switch (t) {
            case Traffic_light::green:      return t=Traffic_light::yellow;
            case Traffic_light::yellow:     return t=Traffic_light::red;
            case Traffic_light::red:        return t=Traffic_light::green;
        }
    }

    Traffic_light next = ++(light);           // next becomes Traffic_ligth::green
}