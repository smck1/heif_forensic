# Details of /images

- alpha\_1440x960.heic
  - Should be 3 images visible inside (though there&#39;s a 4th alpha auxiliary mask image)
    - 1st image is green
    - 2nd image is blue/purplish
    - 3rd image is a combination of the two using the alpha mask (this is set to primary/display image)

- alpha\_1440x960\_edit\_hide\_all.heic
  - Original nokia image of alpha, modified by changing bits for hidden
  - May cause errors due to non-conformity

- alpha\_1440x960\_edit\_hide\_aux.heic
  - Same as above except the master images, and possibly the alpha mapping, are hidden.

- grid\_960x640.heic
  - 4 images in a grid
  - Order stored in file: 1st image is autumn colours, 2nd winter, 3rd is green with water, 4th is a green plain, 5th image is the grid combination
- overlay\_1000x680.heic
  - 4 images overlaid on top of each other (autumn on left, winter at top, plain on right, green/water on bottom)
  - Order stored in file: 1st image is winter, 2nd green plain, 3rd green/water, 4th autumn, 5th is the overlay combination

- autumn\_rotated\_cover.heic
  - Rotated cover image using irot property, 90 degrees
  - Non-destructive, player needs to perform, single master image

- autumn\_cropped\_cover.heic
  - Cropped cover image using clap property, 400, 100
  - Non-destructive, player needs to perform, single master image

- autumn\_mirrored\_cover.heic
  - Mirrored (y-axis) cover image using imir property, false =flipy
  - Non-destructive, player needs to perform, single master image

- autumn\_visible\_secondary\_summer.heic
  - Two images
    - Autumn, set to primary
    - Summer (green from earlier) as visible
- autumn\_hidden\_secondary\_summer.heic
  - Same as above but the summer/green image is hidden

  - The Autumn image loads straight in on Gimp with no selection option.
- autumn\_summer\_as\_thumb.heic
  - the thumbnail image is the summer green/water image, while the actual image itself is the autumn image (with the cabin)
- autumn\_summer\_as\_thumb\_hiddenthumb.heic
  - same as above except the thumbnail is set to hidden. This shouldn&#39;t really change anything, but might cause errors.

- bird\_burst.heic
  - bird coming from bottom of shot to peck at tree. Burst shot
- bird\_burst\_hidden\_thirdinfe.heic
  - same as above, except the 3rd infe item is set to hidden

- candle\_animation.heic
  - Candle burning in dark room, effectively a GIF replacement