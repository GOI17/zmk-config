#include <dt-bindings/zmk/keys.h>

/ {
  macros {
    pwdmanager: pwdmanager {
                  label = "pwdmanager";
                  compatible = "zmk,behavior-macro";
                  #binding-cells = <0>;
                  tap-ms = <1>;
                  wait-ms = <1>;
                  bindings
                    = <&kp S &kp H &kp O &kp R &kp T>
                    , <&kp L &kp O &kp N &kp G>
                    ;
                };
  };
};
