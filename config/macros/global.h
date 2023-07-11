#include <dt-bindings/zmk/keys.h>

/ {
  macros {
    pwdmanager: pwdmanager {
                  label = "pwdmanager";
                  compatible = "zmk,behavior-macro";
                  #binding-cells = <0>;
                  bindings = &kp M &kp y &kp N &kp a &kp m &kp e &kp I &kp s &kp G &kp i &kp l &kp b &kp e &kp r &kp t &kp o \
                    &kp A &kp n &kp d &kp M &kp y &kp G &kp i &kp r &kp l &kp f &kp r &kp i &kp e &kp n &kp d &kp I \
                    &kp s &kp M &kp e &kp l &kp i &kp s &kp s &kp a;
                };
  };
};
