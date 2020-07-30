static const char norm_fg[] = "#c6cdce";
static const char norm_bg[] = "#0C0F10";
static const char norm_border[] = "#0000FF";

static const char sel_fg[] = "#c6cdce";
static const char sel_bg[] = "#596569";
static const char sel_border[] = "#FF0000";

static const char urg_fg[] = "#c6cdce";
static const char urg_bg[] = "#465256";
static const char urg_border[] = "#FF00FF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
