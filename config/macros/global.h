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
                    = <&kp U &kp n &kp b &kp r &kp o &kp k &kp e &kp n &kp MINUS>
                    , <&kp J &kp o &kp l &kp l>
                    , <&kp i &kp n &kp e &kp s>
                    , <&kp s &kp EXCL &kp MINUS &kp S>
                    , <&kp q &kp u &kp e &kp a>
                    , <&kp l &kp e &kp r>
                    ;
                };
  };
};
