#include <behaviors.dtsi>

#define create_macro(name, keys)           \
    name: name {                           \
        label = #name;                     \
        compatible = "zmk,behavior-macro"; \
        wait-ms = <1>;                     \
        tap-ms = <1>;                      \
        #binding-cells = <0>;              \
        bindings = <keys>;                 \
    };
