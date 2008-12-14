
/******************************************************************************
* MODULE     : aqua_rgb.h
* DESCRIPTION: RGB colors following X11 conventons
* NOTE       : created from X11/rgb.txt using
*              awk '{ if ($5) aa = $4 " " $5; else aa = $4;  print "{\"" tolower(aa) "\", RGB(" $1 "," $2 "," $3 ")}," }' < /usr/X11R6/share/X11/rgb.txt
* COPYRIGHT  : (C) 2007  Massimiliano Gubinelli
*******************************************************************************
* This software falls under the GNU general public license version 3 or later.
* It comes WITHOUT ANY WARRANTY WHATSOEVER. For details, see the file LICENSE
* in the root directory or <http://www.gnu.org/licenses/gpl-3.0.html>.
******************************************************************************/

typedef struct { 
  char *name;
  int r,g,b; 
} rgb_record;

#define RGB(r,g,b)  r, g, b 

static int RGBColorsSize = 753;

static rgb_record RGBColors[] = {
{"snow", RGB(255,250,250)},
{"ghost white", RGB(248,248,255)},
{"ghostwhite", RGB(248,248,255)},
{"white smoke", RGB(245,245,245)},
{"whitesmoke", RGB(245,245,245)},
{"gainsboro", RGB(220,220,220)},
{"floral white", RGB(255,250,240)},
{"floralwhite", RGB(255,250,240)},
{"old lace", RGB(253,245,230)},
{"oldlace", RGB(253,245,230)},
{"linen", RGB(250,240,230)},
{"antique white", RGB(250,235,215)},
{"antiquewhite", RGB(250,235,215)},
{"papaya whip", RGB(255,239,213)},
{"papayawhip", RGB(255,239,213)},
{"blanched almond", RGB(255,235,205)},
{"blanchedalmond", RGB(255,235,205)},
{"bisque", RGB(255,228,196)},
{"peach puff", RGB(255,218,185)},
{"peachpuff", RGB(255,218,185)},
{"navajo white", RGB(255,222,173)},
{"navajowhite", RGB(255,222,173)},
{"moccasin", RGB(255,228,181)},
{"cornsilk", RGB(255,248,220)},
{"ivory", RGB(255,255,240)},
{"lemon chiffon", RGB(255,250,205)},
{"lemonchiffon", RGB(255,250,205)},
{"seashell", RGB(255,245,238)},
{"honeydew", RGB(240,255,240)},
{"mint cream", RGB(245,255,250)},
{"mintcream", RGB(245,255,250)},
{"azure", RGB(240,255,255)},
{"alice blue", RGB(240,248,255)},
{"aliceblue", RGB(240,248,255)},
{"lavender", RGB(230,230,250)},
{"lavender blush", RGB(255,240,245)},
{"lavenderblush", RGB(255,240,245)},
{"misty rose", RGB(255,228,225)},
{"mistyrose", RGB(255,228,225)},
{"white", RGB(255,255,255)},
{"black", RGB(0,0,0)},
{"dark slate", RGB(47,79,79)},
{"darkslategray", RGB(47,79,79)},
{"dark slate", RGB(47,79,79)},
{"darkslategrey", RGB(47,79,79)},
{"dim gray", RGB(105,105,105)},
{"dimgray", RGB(105,105,105)},
{"dim grey", RGB(105,105,105)},
{"dimgrey", RGB(105,105,105)},
{"slate gray", RGB(112,128,144)},
{"slategray", RGB(112,128,144)},
{"slate grey", RGB(112,128,144)},
{"slategrey", RGB(112,128,144)},
{"light slate", RGB(119,136,153)},
{"lightslategray", RGB(119,136,153)},
{"light slate", RGB(119,136,153)},
{"lightslategrey", RGB(119,136,153)},
{"gray", RGB(190,190,190)},
{"grey", RGB(190,190,190)},
{"light grey", RGB(211,211,211)},
{"lightgrey", RGB(211,211,211)},
{"light gray", RGB(211,211,211)},
{"lightgray", RGB(211,211,211)},
{"midnight blue", RGB(25,25,112)},
{"midnightblue", RGB(25,25,112)},
{"navy", RGB(0,0,128)},
{"navy blue", RGB(0,0,128)},
{"navyblue", RGB(0,0,128)},
{"cornflower blue", RGB(100,149,237)},
{"cornflowerblue", RGB(100,149,237)},
{"dark slate", RGB(72,61,139)},
{"darkslateblue", RGB(72,61,139)},
{"slate blue", RGB(106,90,205)},
{"slateblue", RGB(106,90,205)},
{"medium slate", RGB(123,104,238)},
{"mediumslateblue", RGB(123,104,238)},
{"light slate", RGB(132,112,255)},
{"lightslateblue", RGB(132,112,255)},
{"medium blue", RGB(0,0,205)},
{"mediumblue", RGB(0,0,205)},
{"royal blue", RGB(65,105,225)},
{"royalblue", RGB(65,105,225)},
{"blue", RGB(0,0,255)},
{"dodger blue", RGB(30,144,255)},
{"dodgerblue", RGB(30,144,255)},
{"deep sky", RGB(0,191,255)},
{"deepskyblue", RGB(0,191,255)},
{"sky blue", RGB(135,206,235)},
{"skyblue", RGB(135,206,235)},
{"light sky", RGB(135,206,250)},
{"lightskyblue", RGB(135,206,250)},
{"steel blue", RGB(70,130,180)},
{"steelblue", RGB(70,130,180)},
{"light steel", RGB(176,196,222)},
{"lightsteelblue", RGB(176,196,222)},
{"light blue", RGB(173,216,230)},
{"lightblue", RGB(173,216,230)},
{"powder blue", RGB(176,224,230)},
{"powderblue", RGB(176,224,230)},
{"pale turquoise", RGB(175,238,238)},
{"paleturquoise", RGB(175,238,238)},
{"dark turquoise", RGB(0,206,209)},
{"darkturquoise", RGB(0,206,209)},
{"medium turquoise", RGB(72,209,204)},
{"mediumturquoise", RGB(72,209,204)},
{"turquoise", RGB(64,224,208)},
{"cyan", RGB(0,255,255)},
{"light cyan", RGB(224,255,255)},
{"lightcyan", RGB(224,255,255)},
{"cadet blue", RGB(95,158,160)},
{"cadetblue", RGB(95,158,160)},
{"medium aquamarine", RGB(102,205,170)},
{"mediumaquamarine", RGB(102,205,170)},
{"aquamarine", RGB(127,255,212)},
{"dark green", RGB(0,100,0)},
{"darkgreen", RGB(0,100,0)},
{"dark olive", RGB(85,107,47)},
{"darkolivegreen", RGB(85,107,47)},
{"dark sea", RGB(143,188,143)},
{"darkseagreen", RGB(143,188,143)},
{"sea green", RGB(46,139,87)},
{"seagreen", RGB(46,139,87)},
{"medium sea", RGB(60,179,113)},
{"mediumseagreen", RGB(60,179,113)},
{"light sea", RGB(32,178,170)},
{"lightseagreen", RGB(32,178,170)},
{"pale green", RGB(152,251,152)},
{"palegreen", RGB(152,251,152)},
{"spring green", RGB(0,255,127)},
{"springgreen", RGB(0,255,127)},
{"lawn green", RGB(124,252,0)},
{"lawngreen", RGB(124,252,0)},
{"green", RGB(0,255,0)},
{"chartreuse", RGB(127,255,0)},
{"medium spring", RGB(0,250,154)},
{"mediumspringgreen", RGB(0,250,154)},
{"green yellow", RGB(173,255,47)},
{"greenyellow", RGB(173,255,47)},
{"lime green", RGB(50,205,50)},
{"limegreen", RGB(50,205,50)},
{"yellow green", RGB(154,205,50)},
{"yellowgreen", RGB(154,205,50)},
{"forest green", RGB(34,139,34)},
{"forestgreen", RGB(34,139,34)},
{"olive drab", RGB(107,142,35)},
{"olivedrab", RGB(107,142,35)},
{"dark khaki", RGB(189,183,107)},
{"darkkhaki", RGB(189,183,107)},
{"khaki", RGB(240,230,140)},
{"pale goldenrod", RGB(238,232,170)},
{"palegoldenrod", RGB(238,232,170)},
{"light goldenrod", RGB(250,250,210)},
{"lightgoldenrodyellow", RGB(250,250,210)},
{"light yellow", RGB(255,255,224)},
{"lightyellow", RGB(255,255,224)},
{"yellow", RGB(255,255,0)},
{"gold", RGB(255,215,0)},
{"light goldenrod", RGB(238,221,130)},
{"lightgoldenrod", RGB(238,221,130)},
{"goldenrod", RGB(218,165,32)},
{"dark goldenrod", RGB(184,134,11)},
{"darkgoldenrod", RGB(184,134,11)},
{"rosy brown", RGB(188,143,143)},
{"rosybrown", RGB(188,143,143)},
{"indian red", RGB(205,92,92)},
{"indianred", RGB(205,92,92)},
{"saddle brown", RGB(139,69,19)},
{"saddlebrown", RGB(139,69,19)},
{"sienna", RGB(160,82,45)},
{"peru", RGB(205,133,63)},
{"burlywood", RGB(222,184,135)},
{"beige", RGB(245,245,220)},
{"wheat", RGB(245,222,179)},
{"sandy brown", RGB(244,164,96)},
{"sandybrown", RGB(244,164,96)},
{"tan", RGB(210,180,140)},
{"chocolate", RGB(210,105,30)},
{"firebrick", RGB(178,34,34)},
{"brown", RGB(165,42,42)},
{"dark salmon", RGB(233,150,122)},
{"darksalmon", RGB(233,150,122)},
{"salmon", RGB(250,128,114)},
{"light salmon", RGB(255,160,122)},
{"lightsalmon", RGB(255,160,122)},
{"orange", RGB(255,165,0)},
{"dark orange", RGB(255,140,0)},
{"darkorange", RGB(255,140,0)},
{"coral", RGB(255,127,80)},
{"light coral", RGB(240,128,128)},
{"lightcoral", RGB(240,128,128)},
{"tomato", RGB(255,99,71)},
{"orange red", RGB(255,69,0)},
{"orangered", RGB(255,69,0)},
{"red", RGB(255,0,0)},
{"hot pink", RGB(255,105,180)},
{"hotpink", RGB(255,105,180)},
{"deep pink", RGB(255,20,147)},
{"deeppink", RGB(255,20,147)},
{"pink", RGB(255,192,203)},
{"light pink", RGB(255,182,193)},
{"lightpink", RGB(255,182,193)},
{"pale violet", RGB(219,112,147)},
{"palevioletred", RGB(219,112,147)},
{"maroon", RGB(176,48,96)},
{"medium violet", RGB(199,21,133)},
{"mediumvioletred", RGB(199,21,133)},
{"violet red", RGB(208,32,144)},
{"violetred", RGB(208,32,144)},
{"magenta", RGB(255,0,255)},
{"violet", RGB(238,130,238)},
{"plum", RGB(221,160,221)},
{"orchid", RGB(218,112,214)},
{"medium orchid", RGB(186,85,211)},
{"mediumorchid", RGB(186,85,211)},
{"dark orchid", RGB(153,50,204)},
{"darkorchid", RGB(153,50,204)},
{"dark violet", RGB(148,0,211)},
{"darkviolet", RGB(148,0,211)},
{"blue violet", RGB(138,43,226)},
{"blueviolet", RGB(138,43,226)},
{"purple", RGB(160,32,240)},
{"medium purple", RGB(147,112,219)},
{"mediumpurple", RGB(147,112,219)},
{"thistle", RGB(216,191,216)},
{"snow1", RGB(255,250,250)},
{"snow2", RGB(238,233,233)},
{"snow3", RGB(205,201,201)},
{"snow4", RGB(139,137,137)},
{"seashell1", RGB(255,245,238)},
{"seashell2", RGB(238,229,222)},
{"seashell3", RGB(205,197,191)},
{"seashell4", RGB(139,134,130)},
{"antiquewhite1", RGB(255,239,219)},
{"antiquewhite2", RGB(238,223,204)},
{"antiquewhite3", RGB(205,192,176)},
{"antiquewhite4", RGB(139,131,120)},
{"bisque1", RGB(255,228,196)},
{"bisque2", RGB(238,213,183)},
{"bisque3", RGB(205,183,158)},
{"bisque4", RGB(139,125,107)},
{"peachpuff1", RGB(255,218,185)},
{"peachpuff2", RGB(238,203,173)},
{"peachpuff3", RGB(205,175,149)},
{"peachpuff4", RGB(139,119,101)},
{"navajowhite1", RGB(255,222,173)},
{"navajowhite2", RGB(238,207,161)},
{"navajowhite3", RGB(205,179,139)},
{"navajowhite4", RGB(139,121,94)},
{"lemonchiffon1", RGB(255,250,205)},
{"lemonchiffon2", RGB(238,233,191)},
{"lemonchiffon3", RGB(205,201,165)},
{"lemonchiffon4", RGB(139,137,112)},
{"cornsilk1", RGB(255,248,220)},
{"cornsilk2", RGB(238,232,205)},
{"cornsilk3", RGB(205,200,177)},
{"cornsilk4", RGB(139,136,120)},
{"ivory1", RGB(255,255,240)},
{"ivory2", RGB(238,238,224)},
{"ivory3", RGB(205,205,193)},
{"ivory4", RGB(139,139,131)},
{"honeydew1", RGB(240,255,240)},
{"honeydew2", RGB(224,238,224)},
{"honeydew3", RGB(193,205,193)},
{"honeydew4", RGB(131,139,131)},
{"lavenderblush1", RGB(255,240,245)},
{"lavenderblush2", RGB(238,224,229)},
{"lavenderblush3", RGB(205,193,197)},
{"lavenderblush4", RGB(139,131,134)},
{"mistyrose1", RGB(255,228,225)},
{"mistyrose2", RGB(238,213,210)},
{"mistyrose3", RGB(205,183,181)},
{"mistyrose4", RGB(139,125,123)},
{"azure1", RGB(240,255,255)},
{"azure2", RGB(224,238,238)},
{"azure3", RGB(193,205,205)},
{"azure4", RGB(131,139,139)},
{"slateblue1", RGB(131,111,255)},
{"slateblue2", RGB(122,103,238)},
{"slateblue3", RGB(105,89,205)},
{"slateblue4", RGB(71,60,139)},
{"royalblue1", RGB(72,118,255)},
{"royalblue2", RGB(67,110,238)},
{"royalblue3", RGB(58,95,205)},
{"royalblue4", RGB(39,64,139)},
{"blue1", RGB(0,0,255)},
{"blue2", RGB(0,0,238)},
{"blue3", RGB(0,0,205)},
{"blue4", RGB(0,0,139)},
{"dodgerblue1", RGB(30,144,255)},
{"dodgerblue2", RGB(28,134,238)},
{"dodgerblue3", RGB(24,116,205)},
{"dodgerblue4", RGB(16,78,139)},
{"steelblue1", RGB(99,184,255)},
{"steelblue2", RGB(92,172,238)},
{"steelblue3", RGB(79,148,205)},
{"steelblue4", RGB(54,100,139)},
{"deepskyblue1", RGB(0,191,255)},
{"deepskyblue2", RGB(0,178,238)},
{"deepskyblue3", RGB(0,154,205)},
{"deepskyblue4", RGB(0,104,139)},
{"skyblue1", RGB(135,206,255)},
{"skyblue2", RGB(126,192,238)},
{"skyblue3", RGB(108,166,205)},
{"skyblue4", RGB(74,112,139)},
{"lightskyblue1", RGB(176,226,255)},
{"lightskyblue2", RGB(164,211,238)},
{"lightskyblue3", RGB(141,182,205)},
{"lightskyblue4", RGB(96,123,139)},
{"slategray1", RGB(198,226,255)},
{"slategray2", RGB(185,211,238)},
{"slategray3", RGB(159,182,205)},
{"slategray4", RGB(108,123,139)},
{"lightsteelblue1", RGB(202,225,255)},
{"lightsteelblue2", RGB(188,210,238)},
{"lightsteelblue3", RGB(162,181,205)},
{"lightsteelblue4", RGB(110,123,139)},
{"lightblue1", RGB(191,239,255)},
{"lightblue2", RGB(178,223,238)},
{"lightblue3", RGB(154,192,205)},
{"lightblue4", RGB(104,131,139)},
{"lightcyan1", RGB(224,255,255)},
{"lightcyan2", RGB(209,238,238)},
{"lightcyan3", RGB(180,205,205)},
{"lightcyan4", RGB(122,139,139)},
{"paleturquoise1", RGB(187,255,255)},
{"paleturquoise2", RGB(174,238,238)},
{"paleturquoise3", RGB(150,205,205)},
{"paleturquoise4", RGB(102,139,139)},
{"cadetblue1", RGB(152,245,255)},
{"cadetblue2", RGB(142,229,238)},
{"cadetblue3", RGB(122,197,205)},
{"cadetblue4", RGB(83,134,139)},
{"turquoise1", RGB(0,245,255)},
{"turquoise2", RGB(0,229,238)},
{"turquoise3", RGB(0,197,205)},
{"turquoise4", RGB(0,134,139)},
{"cyan1", RGB(0,255,255)},
{"cyan2", RGB(0,238,238)},
{"cyan3", RGB(0,205,205)},
{"cyan4", RGB(0,139,139)},
{"darkslategray1", RGB(151,255,255)},
{"darkslategray2", RGB(141,238,238)},
{"darkslategray3", RGB(121,205,205)},
{"darkslategray4", RGB(82,139,139)},
{"aquamarine1", RGB(127,255,212)},
{"aquamarine2", RGB(118,238,198)},
{"aquamarine3", RGB(102,205,170)},
{"aquamarine4", RGB(69,139,116)},
{"darkseagreen1", RGB(193,255,193)},
{"darkseagreen2", RGB(180,238,180)},
{"darkseagreen3", RGB(155,205,155)},
{"darkseagreen4", RGB(105,139,105)},
{"seagreen1", RGB(84,255,159)},
{"seagreen2", RGB(78,238,148)},
{"seagreen3", RGB(67,205,128)},
{"seagreen4", RGB(46,139,87)},
{"palegreen1", RGB(154,255,154)},
{"palegreen2", RGB(144,238,144)},
{"palegreen3", RGB(124,205,124)},
{"palegreen4", RGB(84,139,84)},
{"springgreen1", RGB(0,255,127)},
{"springgreen2", RGB(0,238,118)},
{"springgreen3", RGB(0,205,102)},
{"springgreen4", RGB(0,139,69)},
{"green1", RGB(0,255,0)},
{"green2", RGB(0,238,0)},
{"green3", RGB(0,205,0)},
{"green4", RGB(0,139,0)},
{"chartreuse1", RGB(127,255,0)},
{"chartreuse2", RGB(118,238,0)},
{"chartreuse3", RGB(102,205,0)},
{"chartreuse4", RGB(69,139,0)},
{"olivedrab1", RGB(192,255,62)},
{"olivedrab2", RGB(179,238,58)},
{"olivedrab3", RGB(154,205,50)},
{"olivedrab4", RGB(105,139,34)},
{"darkolivegreen1", RGB(202,255,112)},
{"darkolivegreen2", RGB(188,238,104)},
{"darkolivegreen3", RGB(162,205,90)},
{"darkolivegreen4", RGB(110,139,61)},
{"khaki1", RGB(255,246,143)},
{"khaki2", RGB(238,230,133)},
{"khaki3", RGB(205,198,115)},
{"khaki4", RGB(139,134,78)},
{"lightgoldenrod1", RGB(255,236,139)},
{"lightgoldenrod2", RGB(238,220,130)},
{"lightgoldenrod3", RGB(205,190,112)},
{"lightgoldenrod4", RGB(139,129,76)},
{"lightyellow1", RGB(255,255,224)},
{"lightyellow2", RGB(238,238,209)},
{"lightyellow3", RGB(205,205,180)},
{"lightyellow4", RGB(139,139,122)},
{"yellow1", RGB(255,255,0)},
{"yellow2", RGB(238,238,0)},
{"yellow3", RGB(205,205,0)},
{"yellow4", RGB(139,139,0)},
{"gold1", RGB(255,215,0)},
{"gold2", RGB(238,201,0)},
{"gold3", RGB(205,173,0)},
{"gold4", RGB(139,117,0)},
{"goldenrod1", RGB(255,193,37)},
{"goldenrod2", RGB(238,180,34)},
{"goldenrod3", RGB(205,155,29)},
{"goldenrod4", RGB(139,105,20)},
{"darkgoldenrod1", RGB(255,185,15)},
{"darkgoldenrod2", RGB(238,173,14)},
{"darkgoldenrod3", RGB(205,149,12)},
{"darkgoldenrod4", RGB(139,101,8)},
{"rosybrown1", RGB(255,193,193)},
{"rosybrown2", RGB(238,180,180)},
{"rosybrown3", RGB(205,155,155)},
{"rosybrown4", RGB(139,105,105)},
{"indianred1", RGB(255,106,106)},
{"indianred2", RGB(238,99,99)},
{"indianred3", RGB(205,85,85)},
{"indianred4", RGB(139,58,58)},
{"sienna1", RGB(255,130,71)},
{"sienna2", RGB(238,121,66)},
{"sienna3", RGB(205,104,57)},
{"sienna4", RGB(139,71,38)},
{"burlywood1", RGB(255,211,155)},
{"burlywood2", RGB(238,197,145)},
{"burlywood3", RGB(205,170,125)},
{"burlywood4", RGB(139,115,85)},
{"wheat1", RGB(255,231,186)},
{"wheat2", RGB(238,216,174)},
{"wheat3", RGB(205,186,150)},
{"wheat4", RGB(139,126,102)},
{"tan1", RGB(255,165,79)},
{"tan2", RGB(238,154,73)},
{"tan3", RGB(205,133,63)},
{"tan4", RGB(139,90,43)},
{"chocolate1", RGB(255,127,36)},
{"chocolate2", RGB(238,118,33)},
{"chocolate3", RGB(205,102,29)},
{"chocolate4", RGB(139,69,19)},
{"firebrick1", RGB(255,48,48)},
{"firebrick2", RGB(238,44,44)},
{"firebrick3", RGB(205,38,38)},
{"firebrick4", RGB(139,26,26)},
{"brown1", RGB(255,64,64)},
{"brown2", RGB(238,59,59)},
{"brown3", RGB(205,51,51)},
{"brown4", RGB(139,35,35)},
{"salmon1", RGB(255,140,105)},
{"salmon2", RGB(238,130,98)},
{"salmon3", RGB(205,112,84)},
{"salmon4", RGB(139,76,57)},
{"lightsalmon1", RGB(255,160,122)},
{"lightsalmon2", RGB(238,149,114)},
{"lightsalmon3", RGB(205,129,98)},
{"lightsalmon4", RGB(139,87,66)},
{"orange1", RGB(255,165,0)},
{"orange2", RGB(238,154,0)},
{"orange3", RGB(205,133,0)},
{"orange4", RGB(139,90,0)},
{"darkorange1", RGB(255,127,0)},
{"darkorange2", RGB(238,118,0)},
{"darkorange3", RGB(205,102,0)},
{"darkorange4", RGB(139,69,0)},
{"coral1", RGB(255,114,86)},
{"coral2", RGB(238,106,80)},
{"coral3", RGB(205,91,69)},
{"coral4", RGB(139,62,47)},
{"tomato1", RGB(255,99,71)},
{"tomato2", RGB(238,92,66)},
{"tomato3", RGB(205,79,57)},
{"tomato4", RGB(139,54,38)},
{"orangered1", RGB(255,69,0)},
{"orangered2", RGB(238,64,0)},
{"orangered3", RGB(205,55,0)},
{"orangered4", RGB(139,37,0)},
{"red1", RGB(255,0,0)},
{"red2", RGB(238,0,0)},
{"red3", RGB(205,0,0)},
{"red4", RGB(139,0,0)},
{"deeppink1", RGB(255,20,147)},
{"deeppink2", RGB(238,18,137)},
{"deeppink3", RGB(205,16,118)},
{"deeppink4", RGB(139,10,80)},
{"hotpink1", RGB(255,110,180)},
{"hotpink2", RGB(238,106,167)},
{"hotpink3", RGB(205,96,144)},
{"hotpink4", RGB(139,58,98)},
{"pink1", RGB(255,181,197)},
{"pink2", RGB(238,169,184)},
{"pink3", RGB(205,145,158)},
{"pink4", RGB(139,99,108)},
{"lightpink1", RGB(255,174,185)},
{"lightpink2", RGB(238,162,173)},
{"lightpink3", RGB(205,140,149)},
{"lightpink4", RGB(139,95,101)},
{"palevioletred1", RGB(255,130,171)},
{"palevioletred2", RGB(238,121,159)},
{"palevioletred3", RGB(205,104,137)},
{"palevioletred4", RGB(139,71,93)},
{"maroon1", RGB(255,52,179)},
{"maroon2", RGB(238,48,167)},
{"maroon3", RGB(205,41,144)},
{"maroon4", RGB(139,28,98)},
{"violetred1", RGB(255,62,150)},
{"violetred2", RGB(238,58,140)},
{"violetred3", RGB(205,50,120)},
{"violetred4", RGB(139,34,82)},
{"magenta1", RGB(255,0,255)},
{"magenta2", RGB(238,0,238)},
{"magenta3", RGB(205,0,205)},
{"magenta4", RGB(139,0,139)},
{"orchid1", RGB(255,131,250)},
{"orchid2", RGB(238,122,233)},
{"orchid3", RGB(205,105,201)},
{"orchid4", RGB(139,71,137)},
{"plum1", RGB(255,187,255)},
{"plum2", RGB(238,174,238)},
{"plum3", RGB(205,150,205)},
{"plum4", RGB(139,102,139)},
{"mediumorchid1", RGB(224,102,255)},
{"mediumorchid2", RGB(209,95,238)},
{"mediumorchid3", RGB(180,82,205)},
{"mediumorchid4", RGB(122,55,139)},
{"darkorchid1", RGB(191,62,255)},
{"darkorchid2", RGB(178,58,238)},
{"darkorchid3", RGB(154,50,205)},
{"darkorchid4", RGB(104,34,139)},
{"purple1", RGB(155,48,255)},
{"purple2", RGB(145,44,238)},
{"purple3", RGB(125,38,205)},
{"purple4", RGB(85,26,139)},
{"mediumpurple1", RGB(171,130,255)},
{"mediumpurple2", RGB(159,121,238)},
{"mediumpurple3", RGB(137,104,205)},
{"mediumpurple4", RGB(93,71,139)},
{"thistle1", RGB(255,225,255)},
{"thistle2", RGB(238,210,238)},
{"thistle3", RGB(205,181,205)},
{"thistle4", RGB(139,123,139)},
{"gray0", RGB(0,0,0)},
{"grey0", RGB(0,0,0)},
{"gray1", RGB(3,3,3)},
{"grey1", RGB(3,3,3)},
{"gray2", RGB(5,5,5)},
{"grey2", RGB(5,5,5)},
{"gray3", RGB(8,8,8)},
{"grey3", RGB(8,8,8)},
{"gray4", RGB(10,10,10)},
{"grey4", RGB(10,10,10)},
{"gray5", RGB(13,13,13)},
{"grey5", RGB(13,13,13)},
{"gray6", RGB(15,15,15)},
{"grey6", RGB(15,15,15)},
{"gray7", RGB(18,18,18)},
{"grey7", RGB(18,18,18)},
{"gray8", RGB(20,20,20)},
{"grey8", RGB(20,20,20)},
{"gray9", RGB(23,23,23)},
{"grey9", RGB(23,23,23)},
{"gray10", RGB(26,26,26)},
{"grey10", RGB(26,26,26)},
{"gray11", RGB(28,28,28)},
{"grey11", RGB(28,28,28)},
{"gray12", RGB(31,31,31)},
{"grey12", RGB(31,31,31)},
{"gray13", RGB(33,33,33)},
{"grey13", RGB(33,33,33)},
{"gray14", RGB(36,36,36)},
{"grey14", RGB(36,36,36)},
{"gray15", RGB(38,38,38)},
{"grey15", RGB(38,38,38)},
{"gray16", RGB(41,41,41)},
{"grey16", RGB(41,41,41)},
{"gray17", RGB(43,43,43)},
{"grey17", RGB(43,43,43)},
{"gray18", RGB(46,46,46)},
{"grey18", RGB(46,46,46)},
{"gray19", RGB(48,48,48)},
{"grey19", RGB(48,48,48)},
{"gray20", RGB(51,51,51)},
{"grey20", RGB(51,51,51)},
{"gray21", RGB(54,54,54)},
{"grey21", RGB(54,54,54)},
{"gray22", RGB(56,56,56)},
{"grey22", RGB(56,56,56)},
{"gray23", RGB(59,59,59)},
{"grey23", RGB(59,59,59)},
{"gray24", RGB(61,61,61)},
{"grey24", RGB(61,61,61)},
{"gray25", RGB(64,64,64)},
{"grey25", RGB(64,64,64)},
{"gray26", RGB(66,66,66)},
{"grey26", RGB(66,66,66)},
{"gray27", RGB(69,69,69)},
{"grey27", RGB(69,69,69)},
{"gray28", RGB(71,71,71)},
{"grey28", RGB(71,71,71)},
{"gray29", RGB(74,74,74)},
{"grey29", RGB(74,74,74)},
{"gray30", RGB(77,77,77)},
{"grey30", RGB(77,77,77)},
{"gray31", RGB(79,79,79)},
{"grey31", RGB(79,79,79)},
{"gray32", RGB(82,82,82)},
{"grey32", RGB(82,82,82)},
{"gray33", RGB(84,84,84)},
{"grey33", RGB(84,84,84)},
{"gray34", RGB(87,87,87)},
{"grey34", RGB(87,87,87)},
{"gray35", RGB(89,89,89)},
{"grey35", RGB(89,89,89)},
{"gray36", RGB(92,92,92)},
{"grey36", RGB(92,92,92)},
{"gray37", RGB(94,94,94)},
{"grey37", RGB(94,94,94)},
{"gray38", RGB(97,97,97)},
{"grey38", RGB(97,97,97)},
{"gray39", RGB(99,99,99)},
{"grey39", RGB(99,99,99)},
{"gray40", RGB(102,102,102)},
{"grey40", RGB(102,102,102)},
{"gray41", RGB(105,105,105)},
{"grey41", RGB(105,105,105)},
{"gray42", RGB(107,107,107)},
{"grey42", RGB(107,107,107)},
{"gray43", RGB(110,110,110)},
{"grey43", RGB(110,110,110)},
{"gray44", RGB(112,112,112)},
{"grey44", RGB(112,112,112)},
{"gray45", RGB(115,115,115)},
{"grey45", RGB(115,115,115)},
{"gray46", RGB(117,117,117)},
{"grey46", RGB(117,117,117)},
{"gray47", RGB(120,120,120)},
{"grey47", RGB(120,120,120)},
{"gray48", RGB(122,122,122)},
{"grey48", RGB(122,122,122)},
{"gray49", RGB(125,125,125)},
{"grey49", RGB(125,125,125)},
{"gray50", RGB(127,127,127)},
{"grey50", RGB(127,127,127)},
{"gray51", RGB(130,130,130)},
{"grey51", RGB(130,130,130)},
{"gray52", RGB(133,133,133)},
{"grey52", RGB(133,133,133)},
{"gray53", RGB(135,135,135)},
{"grey53", RGB(135,135,135)},
{"gray54", RGB(138,138,138)},
{"grey54", RGB(138,138,138)},
{"gray55", RGB(140,140,140)},
{"grey55", RGB(140,140,140)},
{"gray56", RGB(143,143,143)},
{"grey56", RGB(143,143,143)},
{"gray57", RGB(145,145,145)},
{"grey57", RGB(145,145,145)},
{"gray58", RGB(148,148,148)},
{"grey58", RGB(148,148,148)},
{"gray59", RGB(150,150,150)},
{"grey59", RGB(150,150,150)},
{"gray60", RGB(153,153,153)},
{"grey60", RGB(153,153,153)},
{"gray61", RGB(156,156,156)},
{"grey61", RGB(156,156,156)},
{"gray62", RGB(158,158,158)},
{"grey62", RGB(158,158,158)},
{"gray63", RGB(161,161,161)},
{"grey63", RGB(161,161,161)},
{"gray64", RGB(163,163,163)},
{"grey64", RGB(163,163,163)},
{"gray65", RGB(166,166,166)},
{"grey65", RGB(166,166,166)},
{"gray66", RGB(168,168,168)},
{"grey66", RGB(168,168,168)},
{"gray67", RGB(171,171,171)},
{"grey67", RGB(171,171,171)},
{"gray68", RGB(173,173,173)},
{"grey68", RGB(173,173,173)},
{"gray69", RGB(176,176,176)},
{"grey69", RGB(176,176,176)},
{"gray70", RGB(179,179,179)},
{"grey70", RGB(179,179,179)},
{"gray71", RGB(181,181,181)},
{"grey71", RGB(181,181,181)},
{"gray72", RGB(184,184,184)},
{"grey72", RGB(184,184,184)},
{"gray73", RGB(186,186,186)},
{"grey73", RGB(186,186,186)},
{"gray74", RGB(189,189,189)},
{"grey74", RGB(189,189,189)},
{"gray75", RGB(191,191,191)},
{"grey75", RGB(191,191,191)},
{"gray76", RGB(194,194,194)},
{"grey76", RGB(194,194,194)},
{"gray77", RGB(196,196,196)},
{"grey77", RGB(196,196,196)},
{"gray78", RGB(199,199,199)},
{"grey78", RGB(199,199,199)},
{"gray79", RGB(201,201,201)},
{"grey79", RGB(201,201,201)},
{"gray80", RGB(204,204,204)},
{"grey80", RGB(204,204,204)},
{"gray81", RGB(207,207,207)},
{"grey81", RGB(207,207,207)},
{"gray82", RGB(209,209,209)},
{"grey82", RGB(209,209,209)},
{"gray83", RGB(212,212,212)},
{"grey83", RGB(212,212,212)},
{"gray84", RGB(214,214,214)},
{"grey84", RGB(214,214,214)},
{"gray85", RGB(217,217,217)},
{"grey85", RGB(217,217,217)},
{"gray86", RGB(219,219,219)},
{"grey86", RGB(219,219,219)},
{"gray87", RGB(222,222,222)},
{"grey87", RGB(222,222,222)},
{"gray88", RGB(224,224,224)},
{"grey88", RGB(224,224,224)},
{"gray89", RGB(227,227,227)},
{"grey89", RGB(227,227,227)},
{"gray90", RGB(229,229,229)},
{"grey90", RGB(229,229,229)},
{"gray91", RGB(232,232,232)},
{"grey91", RGB(232,232,232)},
{"gray92", RGB(235,235,235)},
{"grey92", RGB(235,235,235)},
{"gray93", RGB(237,237,237)},
{"grey93", RGB(237,237,237)},
{"gray94", RGB(240,240,240)},
{"grey94", RGB(240,240,240)},
{"gray95", RGB(242,242,242)},
{"grey95", RGB(242,242,242)},
{"gray96", RGB(245,245,245)},
{"grey96", RGB(245,245,245)},
{"gray97", RGB(247,247,247)},
{"grey97", RGB(247,247,247)},
{"gray98", RGB(250,250,250)},
{"grey98", RGB(250,250,250)},
{"gray99", RGB(252,252,252)},
{"grey99", RGB(252,252,252)},
{"gray100", RGB(255,255,255)},
{"grey100", RGB(255,255,255)},
{"dark grey", RGB(169,169,169)},
{"darkgrey", RGB(169,169,169)},
{"dark gray", RGB(169,169,169)},
{"darkgray", RGB(169,169,169)},
{"dark blue", RGB(0,0,139)},
{"darkblue", RGB(0,0,139)},
{"dark cyan", RGB(0,139,139)},
{"darkcyan", RGB(0,139,139)},
{"dark magenta", RGB(139,0,139)},
{"darkmagenta", RGB(139,0,139)},
{"dark red", RGB(139,0,0)},
{"darkred", RGB(139,0,0)},
{"light green", RGB(144,238,144)},
{"lightgreen", RGB(144,238,144)}
};

#undef RGB
