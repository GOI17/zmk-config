#include <dt-bindings/zmk/keys.h>

/ {
  macros {
    login: login {
                  label = "login";
                  compatible = "zmk,behavior-macro";
                  #binding-cells = <0>;
                  tap-ms = <10>;
                  wait-ms = <10>;
                  bindings
                    = <&kp LS(U) &kp N &kp B &kp R &kp O &kp K &kp E &kp N &kp MINUS &kp LS(J) &kp O &kp L &kp L &kp I &kp N &kp E &kp S &kp S &kp EXCL &kp MINUS &kp LS(S) &kp Q &kp U &kp E &kp A &kp L &kp E &kp R>
                    ;
                };
  };
};
