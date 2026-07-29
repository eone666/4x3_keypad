# RP2040 4x3 Keypad

A compact custom keypad built around the Raspberry Pi RP2040 with a 4x3 switch matrix and QMK/Vial firmware support.

![4x3 keypad](https://raw.githubusercontent.com/eone666/3x4_keypad/refs/heads/main/images/keypad.jpg)

## What’s included

- `firmware/` — keyboard firmware sources, QMK keymaps, and Vial configuration.
- `pcb/` — manufacturing assets for the RP2040 keypad PCB, including BOM, Gerbers, netlist and pick-and-place data.
- `images/keypad.jpg` — visual reference for the assembled keypad.

## Key features

- 12 programmable keys arranged in a 4×3 matrix.
- RP2040 processor with USB bootloader support.
- `COL2ROW` diode orientation.
- Default QMK layout in `firmware/keymaps/default/keymap.c`.
- Vial-compatible layout in `firmware/keymaps/vial/` with 12 joystick-style custom buttons.
- QMK metadata in `firmware/keyboard.json` and Vial metadata in `firmware/keymaps/vial/vial.json`.

## Build and flash

From a QMK firmware root containing this keyboard definition:

```sh
make rp2040_3x4_keypad:default
make rp2040_3x4_keypad:default:flash
```

For the Vial keymap:

```sh
make rp2040_3x4_keypad:vial
make rp2040_3x4_keypad:vial:flash
```

## Vial support

The Vial keymap includes a custom keycode set for 12 gamepad-style buttons (`GP_BTN1` through `GP_BTN12`). The Vial configuration is defined by:

- `firmware/keymaps/vial/config.h`
- `firmware/keymaps/vial/vial.json`

## Bootloader entry

You can enter the bootloader using any of these methods:

- Bootmagic reset via the configured boot key.
- Physical reset button or reset pads on the PCB.
- A key mapped to `QK_BOOT` in the layout.

## Notes

- Hardware vendor/product IDs are defined in `firmware/keyboard.json` as `VID 0x4144` and `PID 0x3433`.
- The PCB files in `pcb/` are ready for fabrication and assembly.
- Adjust layouts and keycodes in the firmware keymap sources as needed.
