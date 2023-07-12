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
                    = <&kp LS(U) &kp N &kp B &kp R &kp O &kp K &kp E &kp N &kp MINUS>
                    , <&kp LS(J) &kp O &kp L &kp L &kp I &kp N &kp E &kp S &kp S &kp EXCL &kp MINUS>
                    , <&kp LS(S) &kp q &kp u &kp e &kp a &kp l &kp e &kp r>
                    ;
                };
  };
};
