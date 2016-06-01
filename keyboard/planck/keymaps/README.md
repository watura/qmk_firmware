# How to add your own keymap

Folders should follow the format *[[ISO 3166-1 alpha-2 code](https://en.wikipedia.org/wiki/ISO_3166-1#Officially_assigned_code_elements)]*_*[layout variant]*_*[layout name/author]*, and contain the following files:

* `keymap.c`
* `readme.md` *recommended*
* `config_user.h` *optional*, found automatically compiling
* `makefile.mk` *optional*, found automatically when compling

When adding your keymap to this list, keep it organised alphabetically (select list, edit->sort lines), use this format:

     * **folder_name*** description

# List of Planck keymaps

* **de_neo2_bone2** tries to emulate the Bone2 Variant of Neo2
* **de_qwertz_lucas**
* **default** the default planck layout (use this for reference)
* **experimental** the place jack messes around with stuff
* **unicode** an experimental full unicode keyboard
* **us_colemak_joe**
* **us_dvorak_leo**
* **us_multi_austin**
* **us_multi_brandon**
* **us_multi_cbbrowne**
* **us_multi_david**
* **us_multi_dzobert**
* **us_multi_kyle**
* **us_multi_max**
* **us_multi_nico**
* **us_multi_pete**
* **us_multi_pvc**
* **us_multi_tak3over**
* **us_multi_yang** uses the WS2812 RGB leds
* **us_qwerty_alexey** tries to imitate the Atreus layout
* **us_qwerty_angerthosenear**
* **us_qwerty_charlie** photoshop macro board
* **us_qwerty_daniel**
* **us_qwerty_gabriel**
* **us_qwerty_jacob**
* **us_qwerty_lukas**
* **us_qwerty_mollat**