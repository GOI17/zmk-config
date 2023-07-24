#include <dt-bindings/zmk/keys.h>

/ {
  macros {
    ZMK_MACRO(pwdmanager, bindings = <&kp LS(M) &kp Y &kp LS(N) &kp A M &kp E &kp LS(I) &kp S &kp LS(G) &kp I>; tap-ms = <1>; wait-ms = <1>;)
    ZMK_MACRO(login, bindings = <&kp LS(U) &kp N &kp B &kp R &kp O &kp K &kp E &kp N &kp MINUS>; tap-ms = <1>; wait-ms = <1>;)
  };
};
