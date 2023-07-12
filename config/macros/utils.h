#define create_macro(name, keys)           \
    name: name##_macro {                   \
        label = #name;                     \
        compatible = "zmk,behavior-macro"; \
        wait-ms = <1>;                     \
        tap-ms = <1>;                      \
        #binding-cells = <0>;              \
        bindings = <keys>;                 \
    };
