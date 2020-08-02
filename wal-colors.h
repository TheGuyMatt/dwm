static const char norm_fg[] = "#e9c5e9";
static const char norm_bg[] = "#0c041d";
static const char norm_border[] = "#0000FF";

static const char sel_fg[] = "#e9c5e9";
static const char sel_bg[] = "#563BBA";
static const char sel_border[] = "#FF0000";

static const char urg_fg[] = "#e9c5e9";
static const char urg_bg[] = "#54309C";
static const char urg_border[] = "#FF00FF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
