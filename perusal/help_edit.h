/* 	$Id$	 */

# ifndef HELP_EDIT_H
# define HELP_EDIT_H

static const gchar * edit_overview[] = {
"The editor applies the editing commands to the sweepfiles associated",
"with the frame from which the editor widgets were popped up. A user",
"must be careful to pop up the editor widget from the proper frame if",
"there is more than one radar displayed.",
" ",
"The editing code is based on the previous version of solo and editing",
"command sets and boundaries are not unique to a particular frame.",
" ",
"The editing of the data in the sweepfiles is controlled by a set of",
"commands typed in by the user. The source directory is determined by",
"the \"Sweepfiles Widget\" and the last sweepfile plotted. The user",
"can change the number of files edited via the \"Start Time\" and",
"\"Stop Time\" entries.",
" ",
"There is a distinction between commands that must be executed for each",
"ray and commands that need to be executed only once at the beginning",
"of each pass through a set of sweepfiles.",
" ",
"Almost all operators can use boundaries. See Help->\"With Boundaries\"",
"for more information about using boundaries.",
" ",
" \"above\", \"below\" and \"between\" are to be substituted for",
"<where> in some of the commands.  \"between\" is inclusive of both",
"limits whereas \"above\" and \"below\" are exclusive of the limit.",
" ",
" ",
"Click Help->\"Cmds with help\" to get a list of commands with help",
"information. Click on the command to see the help information.",
" ",
"The help information for the \"bad-flags-mask\" contains an",
"explanation of bad flag mask operations. The help information for",
"\"one-time\" contains explanations for many \"one-time\" commands",
};

static const gchar * hlp_edit_file[] = {
"\"Reset Times\" will reset the start and stop times if they become",
"hopelessly mangled",
" ",
"\"List Cmd & Bnd Files\" brings up a widget that allows you save",
"and/or retrieve files containing editor commands and boundaries.  The",
"editor command files are created with the prefix \"sed.\" and the",
"boundary files are created with the prefix \"bnd.\". Boundary files",
"contain binary data. The \"asb.\" files created along with the",
"boundary files are text files of boundary information to be used",
"elsewhere and cannot be imported into soloii.",
" ",
"If a list of files appears below the directory for one of the three",
"types of files, you should be able to click on the file name and soloii",
"will import the contents of the file. To get files from other",
"directories, type the directory name in the directory window followed", 
"enter \"Enter\". A list should appear and then you can click on the ",
"file name",
" ",
"\"Import Lat/Lon Bnds\" brings up this same widget. The files listed",
"are text files created externally that contain ordered pairs of",
"latitude and longitude seperated by whitespace. These ordered pairs",
"are used to generate a boundary. There should be one or more ordered",
"pairs per line. There should be at least three sets of ordered",
"pairs. And the file names should have the prefix \"llb.\".",
" ",
"The \"Auto Replot\" toggle cause an automatic replot of the edited ",
"data after a pass through the data caused by clicking \"Ok Do It!\"",
};

static const gchar * edit_start_stop[] = {
"When the edit widget appears the start and stop times are for the",
"last plot in the frame. To cause the editor to process all the",
"files in the directory, the user can enter a \"0\" for the start",
"time and a \"-1\" for the stop time or click the buttons to the",
"right of the entries. Other time spans can be selected by editing",
"the existing entries.",
" ",
"It is not necessary to include fractions of a second or even",
"minutes in order to provide a usable time.",
};

static const gchar * edit_cmd_editing[] = {
"Clicking commands in the lists of commands bring them into a text",
"editing widget for modification. See Help->Shortcuts in the main",
"widget for editing shortcuts.",
" ",
"Moving commands around with the cut and past commands can be done, but",
"care must be taken to capture the invisible end of line characters.",
"This can be done by clicking at the beginning of the line to be moved",
"and dragging the cursor down the the beginning of the next line and",
"typing the \"cut\" keystrokes (Ctrl+X). Next move the cursor to the",
"beginning of the line where the cut line is to be place and type the",
"\"paste\" keystrokes (Ctrl+V).",
" ",
"The required elements of an editor command are the name of the command",
"which should occur at the beginning of each line and the arguments if",
"there are any which are enclosed in angle brackets \"<>\" as viewed in",
"the list of commands. All other modifiers can be eliminated. It is",
"also possible to use only enough characters of the command name to",
"distinguish it from others. e.g. \"flag\" or even \"flagged\" are not",
"unique.",
};

static const gchar * edit_bnds[] = {
"When the user has popped up the edit widget, clicks in the data are",
"assumed to be defining a boundary. A line will be drawn from the",
"previous click to the next click. Typing a \"d\" will remove the last",
"point (and the last line). The color of the boundary is controled by",
"the \"Parameters + Colors\" widget.",
" ",
"More than one boundary can be drawn for use in a pass through the",
"data.  The \"Add Next Button\" starts the next boundary.",
" ",
"The \"Clear Bnd\" button clears the current boundary and if clicked twice",
"in succession will clear all boundaries in the set.",
" ",
"Once a boundary set is used it is eligible to be saved as a file. Once",
"used the boundary set is added to a queue of boundary sets that can be",
"retrieved with the \"Prev Bnd Set\" button.",
" ",
"To save a boundary set, click File->\"List Cmd & Bnd Files\" and click",
"the \"Save Boundary\" button. Solo assigns a file name based on the",
"current time, the user's id number, and the radar name. The comment",
"which the user can edit before clicking the \"Save Boundary\" button",
"will be appended to the file name.",
" ",
"CAUTION!",
"The editor responds to both left clicks and center mouse button clicks",
"(recentering the frame) in the data. The user may temporarily inhibit",
"responding to mouse clicks in the data by toggling the",
"\"Boundary->Draw Boundary\" menubar item.",
};

static const gchar * help_messages[] = {
"overview",
"BB-ac-unfolding",
"absolute-value",
"and-bad-flags",
"assert-bad-flags",
"assign-value",
"bad-flags-mask",
"clear-bad-flags",
"copy",
"copy-bad-flags",
"despeckle",
"do-defreckling",
"do-histogram",
"duplicate",
"establish-and-reset",
"fix-vortex-velocities",
"flag-freckles",
"flag-glitches",
"flagged-add",
"flagged-multiply",
"forced-unfolding",
"general-info",
"header-value",
"ignore-field",
"merge-field",
"one-time",
"or-bad-flags",
"radial-shear",
"remove-aircraft-motion",
"remove-ring",
"remove-surface",
"rewrite",
"set-bad-flags",
"threshold",
"unconditional-delete",
"xor-bad-flags",
"xy-listing",
};

static const gchar * canned_command_sets[] = {
"Bargen-Brown-ac-unfolding",
"flag-freckles",
"flag-glitches",
"irregular-histogram",
"radial-shear",
"regular-histogram",
"thresholding",
"zap-test",
};

static const gchar * BB_ac_unfolding[] = {
"!  Help file for the \"BB-ac-unfolding\" command which has the form:",
" ",
"    BB-ac-unfolding in <field-name>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"  ",
"!  This operation does a Bargen-Brown unfold of a velocity field",
"!  based on the difference between a given point and a running",
"!  average of a certain number of gates being greater than the",
"!  Nyquist Velocity. This command is meant for aircraft data.",
"  ",
"!  Other \"one-time\" commands that affect BB-ac-unfolding are:",
" ",
"    BB-gates-averaged is <integer> gates",
"!  The number of gates in the running average",
"    BB-max-neg-folds is <integer>",
"    BB-max-pos-folds is <integer>",
"!  Stops the number of unfolds from exceeding this value",
"    BB-use-first-good-gate",
"!  This is the default!",
"!  Causes the running average to initialize on the first good gate",
"!  encountered in the first ray in the sweep. Subsequent rays ",
"!  initialize on the first good gate in the previous ray.",
"    BB-use-ac-wind",
"!  Is for aircraft data and means to use the wind information from the",
"!  ac data present. ",
"    BB-use-local-wind",
"!  Users can define the local wind in m/s. with",
"    ew-wind <float>",
"    ns-wind <float>",
};

static const gchar * absolute_value[] = {
"!  Help file for the \"absolute-value\" command which has the form:",
" ",
"    absolute-value of <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Computes and assigns the absolute value to all gates in each ray",
"!    or just gates inside or outside boundaries.",
"!  e.g.",
"    absolute-value of AP",
};

static const gchar * and_bad_flags[] = {
"!  Help file for the \"and-bad-flags\" command which has the form:",
" ",
"    and-bad-flags when <field> <below>|<above>|<between> <real> [and <real>]",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  ANDs the result of the condition with the bad flags mask.",
"!  If the test field is flagged bad, the flag in the bad flags mask",
"!  is turned off otherwise the condition is ANDed with the",
"!  corresponding bad flag.",
" ",
"!  e.g.",
"    and-bad-flags when SW above 4.4",
"    and-bad-flags when VE between -1. and 1.",
" ",
"!  You might also use the following sequence as one way to",
"!  remove clutter from both the VE and DZ fields:",
" ",
"    set-bad-flags when VE between -1. and 1.",
"    and-bad-flags when DZ above 35.",
"    assert-bad-flags in VE",
"    assert-bad-flags in DZ",
"!  Turning off the flag when the test field contains a delete flag",
"!  for AND only guarentees that the absence of a reflectivity will",
"!  not cause a velocity value between -1. and 1. to be deleted in",
"!  the above example.  Click on the next line for more information on the",
"    bad-flags-mask",
};

static const gchar * assert_bad_flags[] = {
"!  Help file for the \"assert-bad-flags\" command which has the form:",
" ",
"    assert-bad-flags in <field> ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Set delete flags in the field indicated based on the bad flags mask",
"!  e.g.",
"    assert-bad-flags in VT",
};

static const gchar * assign_value[] = {
"!  Help file for the \"assign-value\" command which has the form:",
" ",
"    assign-value <real> to <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Assigns the <real> value to all gates in each ray or just gates",
"    inside or outside boundaries.",
"!  e.g.",
"    assign-value 2 to AP",
};

static const gchar * bad_flags_mask[] = {
"!  The bad flags mask which can also be thought of a just a flags mask",
"!  is an array of flags that can be manipulated with",
"!  logical operations on fields and then asserted in various fields.",
"!  For example you might use the following sequence as one way to",
"!  remove clutter from both the VE and DZ fields:",
" ",
"    clear-bad-flags",
"    set-bad-flags when VE between -1. and 1.",
"    and-bad-flags when DZ above 35.",
"    assert-bad-flags in VE",
"    assert-bad-flags in DZ",
" ",
"!  \"set-bad-flags\" automatically clears the bad flags mask",
"!  but other operations that set flags DO NOT automatically clear the",
"!  bad flags mask so you will want to insert a \"clear-bad-flags\"",
"!  command at least once in each ray.",
" ",
"!  Bad flagged data do not cause the flag to be set, only the ",
"!  condition being true causes the bad flag to be set.",
"!  You can also create a flag mask based on the bad data flags",
"!  in a field with the \"copy-bad-flags\" command which also effectively ",
"!  clears the flags mask.",
" ",
"!  The AND operation also has a special feature that turns off",
"!  a flag when the test field contains a delete flag. This",
"!  guarentees that the absence of a reflectivity in this case will",
"!  not cause a velocity value between -1. and 1. to be deleted.",
" ",
"!  Other flag operations:",
"    or-bad-flags",
"    xor-bad-flags",
"    copy-bad-flags",
"    flagged-add",
"    flagged-multiply",
"    flagged-copy",
"    flag-freckles",
"    flag-glitches",
};

static const gchar * clear_bad_flags[] = {
"!  Help file for the \"clear-bad-flags\" command which has the form:",
" ",
"    clear-bad-flags",
"!  Clears all flags in the bad flags mask.",
"!  At the very least you should clear the bad flags at the beginning of",
"!    a set of operations for each ray so that flags set for the ",
"!    previous ray do not affect operation for the current ray. This is",
"!    not done automatically because it would be unnecessary overhead",
"!    if you are not using flag operations.",
};

static const gchar * copy_bnd[] = {
"!  Help file for the \"copy\" command which has the form:",
" ",
"    copy from <field> to <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Copies gates from one field to another USING THE BOUNDARY.",
"!  e.g.",
"    copy from VE to VG",
" ",
"!  See",
"    duplicate VE in VG",
" ",
"!  for an alternative that ignores the boundary",
};

static const gchar * copy_bad_flags[] = {
"!  Help file for the \"copy-bad-flags\" command which has the form:",
" ",
"    copy-bad-flags from <field> ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Sets or clears flags in the bad flags mask based on delete flags",
"!  in the <field>",
"!  e.g.",
"    copy-bad-flags from DZ",
};

static const gchar * despeckle[] = {
"!  Help file for the \"despeckle\" command which has the form:",
" ",
"    despeckle in <field-name>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Other \"one-time\" commands that affect defreckling are:",
"    a-speckle is <integer> gates",
"!  defines a speckle and <integer> or less gates surrounded",
"!  by delete flags.",
"!  This operation removes speckles",
};

static const gchar * do_defreckling[] = {
"!  Help file for the \"do-defreckling\" command which has the form:",
" ",
"    do-defreckling in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Other \"one-time\" commands that affect defreckling are:",
" ",
"    freckle-average is <integer> gates",
"!  number of gates in the running average",
"    freckle-threshold is <real>",
"!  maximum acceptable shear for determining a freckle",
" ",
"!  A point is deleted if the difference between it and the running",
"!  average is greater than the max shear. We start out averaging",
"!  n gates ahead but once we have encountered n non-shear points",
"!  we go to a trailing average. See also",
"    flag-freckles",
};

static const gchar * do_histogram[] = {
"!  Help file for the \"do-histogram\" command which has the form:",
" ",
"    do-histogram",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  You can only do one histogram on one field on each pass through the data.",
" ",
"!  Other \"one-time\" commands that affect histogram calculation are:",
" ",
"    regular-histogram-parameters low <real> high <real> increment <real>",
"!  \"low\", \"high\", and \"increment\" are optional, but order of the arguments",
"!  is critical!",
" ",
"    area-histogram on <field>",
"!  does areas instead of counts",
"    count-histogram on <field>",
"!  the two commands above would also cause a reset to accept a new",
"!  set of irregular bins.",
" ",
"    irregular-histogram-bin from <real> to <real>",
" ",
"!  one line for each irregular bin. Irregular bins can overlap or underlap.",
"!  The algorithm imposes a resolution of 100 bins between the min and max",
"!  values and fills an irregular bin based on the set of regular bins",
"!  that fall inside the region defined by the irregular bin.",
" ",
"    new-histogram-file",
"!  starts a new file of histogram output information",
"    append-histogram-to-file",
"!  causes histogram output to be appended to the current histogram file",
"    dont-append-histogram-to-file",
" ",
"    histogram-comment \"appends_this_comment_to_the_file_name\"",
"!  use double quotes for the comment unless you use underscores",
" ",
"    histogram-directory /your_path_to/histograms",
"    histogram-flush   ! makes the output file contents visible",
" ",
"!  e.g. set of commands to do a histogram",
" ",
"!  commands that need to be executed only once",
" ",
"    count-histogram on VU",
"    regular-histogram-parameters low -12. high 12. increment 1.",
" ",
"!  operations executed for-each-ray",
" ",
"    do-histogram",
};

static const gchar * duplicate[] = {
"!  Help file for the \"duplicate\" command which has the form:",
" ",
"    duplicate <field> in <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Makes a duplicate of one field in another and does NOT use the",
"!  boundary.",
"!  e.g.",
"    duplicate VE in VG",
"!",
"    duplicate VE in VG",
"    ignore VE",
"!  Is effectively a rename of field VE.",
};

static const gchar * establish_and_reset[] = {
"!  Help file for the \"establish-and-reset\" command which has the form:",
" ",
"    establish-and-reset from <field> to <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Copies header information from one field to another and",
"!  initializes the field with bad data flags.",
"!  e.g.",
"    establish-and-reset from VE to RS",
};

static const gchar * fix_vortex_velocities[] = {
"!  Help file for the \"fix-vortex-velocities\" command which has the form:",
" ",
"    fix-vortex-velocities in <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Works only if the fields VS and VL are present. Operation replaces the",
"!    original vield VR by recalculating the final dual prt velocity",
"!    and eliminating some noisy gates.",
"  ",
"!  e.g.",
"    fix-vortex-velocities in VG",
};

static const gchar * flag_freckles[] = {
"!  Help file for the \"flag-freckles\" command which has the form:",
" ",
"    flag-freckles in <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Other \"one-time\" commands that affect defreckling are:",
" ",
"    freckle-average is <integer> gates",
"!  number of gates in the running average",
"    freckle_threshold is <real>",
"!  maximum acceptable shear for determining a freckle",
" ",
"!  Set a flag if the difference between point and the running average",
"!  is greater than the max shear. We start out averaging n gates ahead",
"!  but once we have encountered enought non-shear points we go to a",
"!  trailing average",
"!  e.g.",
"    clear-bad-flags",
"    flag-freckles in DZ",
"    assert-bad-flags in DZ",
"    assert-bad-flags in VT",
};

static const gchar * flag_glitches[] = {
"!  Help file for the \"flag-glitches\" command which has the form:",
" ",
"    flag-glitches in <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Other \"one-time\" commands that affect defreckling are:",
" ",
"    deglitch-radius is <integer> gates",
"!  defines the number of gates in the running average (navg = radius * 2 +1)",
"    deglitch-threshold is <real>",
"!  maximum acceptable shear for determining a glitch",
"    deglitch-min-gates is <integer>",
"!  minimum number of good gates before any glitch test is attempted    ",
" ",
"!  Set a flag if the difference between a valid center point",
"!  and the running average without the center point is greater than",
"!  the max shear.",
"!  e.g.",
"    deglitch-radius is 3 gates",
"!  running average is for 7 gates",
"    deglitch-threshold is 15",
"    deglitch-min-gates is 6",
"!  need only 6 valid points to conduct a glitch test",
"!  for-each-ray",
"    clear-bad-flags",
"    flag-glitches in DZ",
"    assert-bad-flags in DZ",
"    assert-bad-flags in VT",
};

static const gchar * flagged_add[] = {
"!  Help file for the \"flagged-add\" command which has the form:",
" ",
"    flagged-add of <real> in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  This operation will obey boundaries and will add the appropriate value",
"!    to the gate value if the corresponding \"bad-flag\" is set.",
"  ",
"!  e.g.",
"    clear-bad-flags",
"    set-bad-flags when VQ below 0",
"    flagged-add of 50.72 in VQ",
};

static const gchar * flagged_multiply[] = {
"!  Help file for the \"flagged-multiply\" command which has the form:",
" ",
"    flagged-multiply of <real> in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  This operation will obey boundaries and will multiply the gate value",
"!    by the appropriate value if the corresponding \"bad-flag\" is set.",
"  ",
"!  e.g.",
"    clear-bad-flags",
"    set-bad-flags when VQ below 0",
"    flagged-multiply by -1. in VQ",
};

static const gchar * forced_unfolding[] = {
"!  Help file for the \"forced-unfolding\" command which has the form:",
" ",
"    forced-unfolding in <field> around <real>",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  Forces all data points to fall within plus or minus the Nyquist",
"!  Velocity of the <real> value.",
};

static const gchar * header_value[] = {
"!  Help file for the \"header-value\" command which has the form:",
" ",
"    header-value <name> is <real>",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  Changes the value of the named variable in one of the headers",
"  ",
"!  Exhaustive list of examples:",
" ",
"    header-value nyquist-velocity is 23.45 meters-per-second",
"    header-value fixed-angle is 12.3456 degrees",
"    header-value range-to-first-cell is 123.456 meters",
"    header-value cell-spacing is 156.7 meters",
"    header-value rotation-angle is 180.0 degrees",
"    header-value tilt-angle 0.0 degrees",
"    header-value elevation-angle 90.0 degrees",
"    header-value latitude 39.7867 degrees",
"    header-value longitude -104.5458 degrees",
"    header-value altitude 1.7102 km.",
"    header-value agl-altitude 1.7102 km.",
"    header-value msl-into-agl-corr 0.0 km.",
"    header-value corr-elevation by 5. degrees",
"    header-value corr-azimuth by 5. degrees",
"    header-value corr-rot-angle by 5. degrees",
" ",
"!  Tokens following the <real> are ignored but can be included to",
"!  clarify the units of the header value",
"!  \"rotation-angle\" and \"tilt-angle\" modify the platform header for",
"!  every ray and modifying the \"rotation-angle\" is only useful for",
"!  non-scanning instruments on moving platforms.",
"!  \"elevation-angle\" modifies the ray information header",
"!  for each ray.",
};

static const gchar * ignore_field[] = {
"!  Help file for the \"ignore-field\" command which has the form:",
" ",
"    ignore-field <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Causes the field to be ignored when writing the ray back out to the disk.",
"  ",
"!  e.g.",
"    ignore-field VX",
"!",
"!  Which is effectively a delete or removal of this field.",
};

static const gchar * merge_field[] = {
"!  Help file for the \"merge-field\" command which has the form:",
" ",
"    merge-field <field> with <field> put-in <field>",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  If the first field value in not bad it is placed in the third field",
"!  otherwise the second field value is placed in the third field",
"!  e.g.",
"    merge-field VX with VE put-in VY",
};

static const gchar * one_time[] = {
" ",
"Replace angle brackets and argument types with appropriate arguments.",
" ",
"    a-speckle is <integer> gates",
" ",
"!  used by \"despeckle\". If the number of gates specified is n, then we",
"!  will remove any set of n or less gates that are preceeded and",
"!  followed by delete flags.",
" ",
"    first-good-gate is <integer>",
" ",
"!  for an operation on a ray, this parameter setting indicates",
"!  where to begin the operation. If the first good gate is n, then",
"!  we will ignore the first n-1 gates. Thresholding operations ",
"!  will set the delete flag in these gates.",
" ",
"    freckle-average is <integer> gates",
" ",
"!  used by \"do-defreckling\" to indicate the number of gates to average",
" ",
"    freckle-threshold is <real>",
" ",
"!  used by \"do-defreckling\" to indicate the maximum acceptable shear",
"!  between a gate and the running average",
" ",
"    offset-for-radial-shear is <integer> gates",
"!  used by \"radial-shear\" command to create a field of the",
"!  differences between the current gate and the gate n gates ahead",
" ",
"    ew-wind is <real>",
"!  enters the east-west wind where the value is positive if the",
"!  wind is from the west. Dimensions are m/s.",
" ",
"    ns-wind is <real>",
"!  enters the north-south wind where the value is positive if the",
"!  wind is from the south. Dimensions are m/s.",
" ",
"    vert-wind is <real>",
"!  enters the vertical wind where the value is positive if there",
"!  is an updraft. Dimensions are m/s.",
};

static const gchar * or_bad_flags[] = {
"!  Help file for the \"or-bad-flags\" command which has the form:",
" ",
"    or-bad-flags when <field> <below>|<above>|<between> <real> [and <real>]",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  ORs the result of the condition with the bad flag. The bad flags mask",
"!  is not modified if the test field contains a bad flag.",
"!  e.g.",
"    or-bad-flags when DZ below 0.0",
"    or-bad-flags when VE between -1. and 1.",
"!  Click on the next line for more information on the",
"    bad-flags-mask",
};

static const gchar * radial_shear[] = {
"!  Help file for the \"radial-shear\" command which has the form:",
" ",
"    radial-shear in <field> put-in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  If the \"put-in\" field does not exist it will be added using",
"!  the header information from the source field.",
" ",
"!  Other \"one-time\" commands that affect radial-shear are:",
" ",
"    offset-for-radial-shear is <integer> gates",
" ",
"!  if n is the number of gates, then the shear value is computed by",
"!  shear = val[i+n] - val[i];",
};

static const gchar * remove_aircraft_motion[] = {
"!  Help file for the \"remove-aircraft-motion\" command which has the form:",
" ",
"    remove-aircraft-motion in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  This operation subtract the component of velocity contributed by",
"!  the aircraft's motion based on the following calculation:",
" ",
"!     vert =  asib->vert_velocity != -999 ? asib->vert_velocity : 0;",
"!     d = sqrt((double)(SQ(asib->ew_velocity) + SQ(asib->ns_velocity)));",
"!     d += dds->cfac->ew_gndspd_corr; /* klooge to correct ground speed */",
"!     ac_vel = d*sin(ra->tilt) + vert*sin(ra->elevation);",
" ",
"!  These are the calculated track relative tilt and elevations.",
"!  e.g.",
"    remove-aircraft-motion in VG",
};

static const gchar * remove_ring[] = {
"!  Help file for the \"remove-ring\" command which has the form:",
" ",
"    remove-ring in <field> from <real> to <real> km.",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Inserts a bad data flag between the two indicated ranges.",
" ",
"!  e.g.",
"    remove-ring in VQ from 75.15 to 75.8 km.",
};

static const gchar * remove_surface[] = {
"!  Help file for the \"remove-surface\" command which has the form:",
" ",
"    remove-surface in <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Other \"one-time\" commands that affect removing the surface are:",
" ",
"    optimal-beamwidth is <real> degrees",
"!  As a default the algorithm uses the beamwidth in the headers but",
"!    it is sometime helpful to widen this beamwidth to eliminate",
"!    more contaminated gates.",
" ",
"!  e.g.",
"!    optimal-beamwidth is 3.3 degrees",
"!    for-each-ray (put one-time cmds before this line)",
"!    remove-surface in VQ",
};

static const gchar * rewrite[] = {
"!  Help file for the \"rewrite\" command which has the form:",
" ",
"    rewrite",
" ",
"!  This command triggers a rewrite of a sweepfile in the absence",
"!  of any other edit commands that modify the data.",
};

static const gchar * set_bad_flags[] = {
"!  Help file for the \"set-bad-flags\" command which has the form:",
" ",
"    set-bad-flags when <field> <below>|<above>|<between> <real> [and <real>]",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
" ",
"!  ALWAYS clears the bad flags and then sets them based",
"!  on the condition being satified. The bad flag will not be set",
"!  if the test field contains a delete flag.",
"!  e.g.",
"    set-bad-flags when VE between -1. and 1.",
" ",
"!  You can then use a command like",
"    and-bad-flags when DZ above 35.",
"!  or",
"    or-bad-flags when DZ below 0.0",
" ",
"!  to create a more complex mask and then use",
"    assert-bad-flags",
" ",
"!  in various fields. See",
"    bad-flags-mask",
};

static const gchar * threshold[] = {
"!  Help file for the \"threshold\" command which has the form:",
" ",
"    threshold <field> on <field> <below>|<above> <real>",
"!  Replace angle brackets and argument types with appropriate arguments.",
"  ",
"!  Two example commands are:",
"    threshold VT on NCP below 0.333",
"    threshold VT on SW above 5.0",
};

static const gchar * unconditional_delete[] = {
"!  Help file for the \"unconditional-delete\" command which has the form:",
" ",
"    unconditional-delete in <field> ",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Should be use ONLY with a boundary present. Deletes gates that",
"!  satisfy boundary conditions.",
"!  e.g.",
"    unconditional-delete in VT",
};

static const gchar * xor_bad_flags[] = {
"!  Help file for the \"xor-bad-flags\" command which has the form:",
" ",
"    xor-bad-flags when <field> <below>|<above>|<between> <real> [and <real>]",
"!  Replace angle brackets and argument types with appropriate arguments.",
"!  Does and EXCLUSIVE OR of the result of the condition with",
"!  the bad flag. The bad flag field is not modified",
"!  if the test field contains a bad flag.",
"!  e.g.",
"    xor-bad-flags when DZ below 0.0",
"    xor-bad-flags when VE between -1. and 1.",
};

static const gchar * xy_listing[] = {
"!  Help file for the \"xy-listing\" command which has the form:",
" ",
"    xy-listing of <field> and <field>",
" ",
"!  Replace angle brackets and argument types with appropriate arguments.",
"  ",
"!  This operation creates an ASCII file with two columns one for each ",
"!  field. This file is closed at the end of each pass and a new one",
"!  opened for the next pass.",
" ",
"!  \"xy-directory <directory>\" allows the user to choose a destination",
"!  directory for this file. This directory is synonymous with the",
"!  \"histogram-directory\". The file name begins with the prefix \"xyp\".",
" ",
"!  The \"histogram-comment\" is appended to the file name plus the two",
"!  field names.",
" ",
"!  The time stamp in the file name is the start of the data; therefore,",
"!  THE ONLY WAY to distinguish two passes through the data for the same",
"!  time and the same two variables is with the \"histogram-comment\" ",
};

static const gchar * Bargen_Brown_ac_unfoldingz_cc[] = {
"!  commands that need to be executed only once",
" ",
"    BB-gates-averaged is 4",
"    BB-max-pos-folds is 1",
"    BB-max-neg-folds is 1",
"    BB-use-ac-wind",
" ",
"!  operations executed for-each-ray ",
" ",
"    duplicate VE in VG",
"    remove-aircraft-motion in VG",
"    duplicate VG in VU",
"    BB-unfolding in VU",
" ",
};

static const gchar * flag_freckles_cc[] = {
"!  commands that need to be executed only once",
" ",
"    freckle-threshold is 5.0",
"    freckle-average is 3 gates",
" ",
"!  operations executed for-each-ray ",
" ",
"    clear-bad-flags",
"    flag-freckles in VD",
"    assert-bad-flags in VQ",
" ",
};

static const gchar * flag_glitches_cc[] = {
"!  commands that need to be executed only once",
" ",
"    deglitch-min-gates is 9",
"    deglitch-radius is 5",
"    deglitch-threshold is 15",
" ",
"!  operations executed for-each-ray ",
" ",
"    duplicate DBZ DY",
"    clear-bad-flags",
"    flag-glitches in DBZ",
"    assert-bad-flags in DY",
};

static const gchar * irregular_histogram_cc[] = {
"!  commands that need to be executed only once",
" ",
"area-histogram on DZ",
"irregular-histogram-bin from -40. to 10",
"irregular-histogram-bin from 10 to 40.",
"irregular-histogram-bin from 25 to 50.",
"irregular-histogram-bin from 40 to 80.",
" ",
"!  operations executed for-each-ray",
" ",
"do-histogram",
" ",
};

static const gchar * radial_shear_cc[] = {
"!  commands that need to be executed only once",
" ",
"offset-for-radial-shear is 5 gates",
" ",
"!  operations executed for-each-ray",
" ",
"radial-shear in VU put-in RS",
" ",
};

static const gchar * regular_histogram_cc[] = {
"!  commands that need to be executed only once",
" ",
"count-histogram on VE",
"regular-histogram-parameters low -13. high 13. increment 1.",
" ",
"!  operations executed for-each-ray",
" ",
"do-histogram",
" ",
};

static const gchar * thresholding_cc[] = {
"  operations executed for-each-ray (put one-time cmds before this line)",
" ",
"set-bad-flags when NCP below .333",
"assert-bad-flags in VT",
" ",
"!  could also say \"when SW above 4.\"",
" ",
};

static const gchar * zap_test_cc[] = {
"  for-each-ray (put one-time cmds before this line)",
" ",
"    duplicate VG in VU",
"    unconditional-delete in VU",
" ",
};

static const gchar * hlp_edit_[] = {
};



# endif

