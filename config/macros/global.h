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
                    = <&kp LS(M) &kp Y &kp LS(N) &kp A M &kp E &kp LS(I) &kp S &kp LS(G) &kp I &kp L &kp B &kp E &kp R &kp T &kp O &kp LS(A) &kp N &kp D &kp LS(M) &kp Y &kp LS(G) &kp I &kp R &kp L &kp F &kp R &kp I &kp E &kp N &kp D &kp LS(I) &kp S &kp LS(M) &kp E &kp L &kp I &kp S &kp S &kp A>
                    ;
                };
  };
};
