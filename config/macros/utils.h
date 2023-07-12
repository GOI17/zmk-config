void create_macro(name, keys) {
  ZMK_MACRO(name,
      label = name;
      tap-ms = <1>;
      wait-ms = <1>;
      bindings = <keys>;
  )
}
