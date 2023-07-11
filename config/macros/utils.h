#define create_macro(name, keys)
name: name##_macro {
        label = #name;
        compatible = "zmk,behavior-macro";
        #binding-cells = <0>;
        tap-ms = <1>;
        wait-ms = <1>;
        bindings = <keys>;
      };
