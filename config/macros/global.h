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
                    = <&macro_tap_time 10>
                    , <&kp S &kp H &kp O &kp R &kp T>
                    , <&macro_tap_time 500>
                    , <&kp L &kp O &kp N &kp G>
                    ;
                };
  };
};
