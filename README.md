# ergodox-ez-shine-dvorak

Dvorak keyboard layout for ErgoDox EZ Shine, inspired by
the key placement of the TypeMatrix 2030 USB.

<figure>
<img src=ErgoDox-EZ-Shine.svg alt="ErgoDox EZ Shine">
<figcaption style="font-size: 80%">
  ErgoDox EZ Shine. Illustration from ErgoDox EZ website.
  Copyright © 2019 ZSA Technology Labs, Inc.
</figcaption>
</figure>

## The what now?

I've been using the [Dvorak keyboard layout](https://en.wikipedia.org/wiki/Dvorak_keyboard_layout) since 2009/2010.
Back then I had a TypeMatrix 2030 USB. I stuck with
TypeMatrix most of the time between then and...
December 2017!

In December 2017, I bought an [ErgoDox EZ Shine](https://ergodox-ez.com)
(see [details below](#ergodox-ez-keyboard-model)).

Using the [Oryx configurator](https://ergodox-ez.com/pages/oryx), 
I immediatelly created a custom layout for my ErgoDox EZ Shine.
A layout that was *heavily* inspired by the key placement on
my previous keyboard, the TypeMatrix 2030 USB.

Over time I've made small adjustments to my custom layout
in Oryx but the layout remains true to the TypeMatrix still.
Only, it's like, *a million times better*.

So anyway, time to put this configuration somewhere
rather than just relying on the ErgoDox EZ website
to stay up forever, eh? Hence this repo.

## Have a look at the layout

Look at [the PDF](configuration.pdf) included in this repo,
or [look at the layout in Oryx](https://configure.ergodox-ez.com/ergodox-ez/layouts/PBKjJ/QBBXg/0).

## ErgoDox EZ keyboard model

<table>
  <tr>
    <th>Color</th>
    <th>Tilt kit</th>
    <th>Wing rest</th>
    <th>Shine</th>
  </tr>
  <tr>
    <td>Black</td>
    <td>Yes</td>
    <td>Yes<sup>*</sup></td>
    <td>Yes</td>
  </tr>
</table>

<table>
  <tr>
    <th>Keycaps</th>
    <th>Switches</th>
  </tr>
  <tr>
    <td>Blank, sculpted keycaps</td>
    <td>Kailh Thick Gold</td>
  </tr>
</table>

\*: For a long while, I prefered using the keyboard
without the wing rests. Currently I am using them again.
I think that their utility depends a bit on your posture,
position of keyboard relative to body and to the placement
of the keyboard on the table and how much room you have
available on the table.

## Building from source

See [ergodox_ez_instructions.md](ergodox_ez_instructions.md).

## Using pre-built firmware image

Download firmware image using link at
https://configure.ergodox-ez.com/ergodox-ez/layouts/PBKjJ/QBBXg/0
or download a copy of the same firmware image from
https://github.com/ctsrc/ergodox-ez-shine-dvorak/releases/download/2020-07-18-QBBXg/ergodox_ez_dvorak_PBKjJ_QBBXg.hex

SHA256 (`ergodox_ez_dvorak_PBKjJ_QBBXg.hex`) = b9f287adc6faab55fa3de63851f64785c3629f590821fc00c64f0033ea362400

## Flashing the firmware image

Use for example the flashing tool provided by ZSA Technology Labs:

  * https://ergodox-ez.com/pages/wally
  * https://github.com/zsa/wally

## Copyright

Portions copyright © 2019 ZSA Technology Labs, Inc.
