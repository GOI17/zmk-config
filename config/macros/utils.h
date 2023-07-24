#define create_macro(name, keys)           \
    name: name {                           \
        label = #name;                     \
        compatible = "zmk,behavior-macro"; \
        #binding-cells = <0>;              \
        wait-ms = <1>;                     \
        tap-ms = <1>;                      \
        bindings = <keys>;                 \
    };
// #define create_macro(name, keys) ZMK_MACRO(name, bindings = <keys>; tap-ms = <1>; wait-ms = <1>;);
