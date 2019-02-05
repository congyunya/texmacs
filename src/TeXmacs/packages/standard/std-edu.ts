<TeXmacs|1.99.8>

<style|<tuple|source|std>>

<\body>
  <active*|<\src-title>
    <src-package|std-edu|1.0>

    <\src-purpose>
      Standard educational macros.
    </src-purpose>

    <src-copyright|2019|Joris van der Hoeven>

    <\src-license>
      This software falls under the <hlink|GNU general public license,
      version 3 or later|$TEXMACS_PATH/LICENSE>. It comes WITHOUT ANY
      WARRANTY WHATSOEVER. You should have received a copy of the license
      which the software. If not, see <hlink|http://www.gnu.org/licenses/gpl-3.0.html|http://www.gnu.org/licenses/gpl-3.0.html>.
    </src-license>
  </src-title>>

  <use-module|(education edu-edit)>

  <\active*>
    <\src-comment>
      Same rendering for exercise, problem and question
    </src-comment>
  </active*>

  <assign|render-exercise|<\macro|which|body>
    <\padded*>
      <surround|<exercise-name|<arg|which><exercise-sep>>||<arg|body>>
    </padded*>
  </macro>>

  <\active*>
    <\src-comment>
      Folding
    </src-comment>
  </active*>

  <assign|folded|<\macro|x|y>
    <\surround||<right-flush><action|<with|color|#336666|<strong|<math|<op|\<Downarrow\>>>>>|mouse-unfold|<arg|x>>>
      <arg|x>
    </surround>

    <hidden|<arg|y>>
  </macro>>

  <assign|unfolded|<\macro|x|y>
    <surround||<right-flush><action|<with|color|#336666|<strong|<math|<op|\<Uparrow\>>>>>|mouse-fold|<arg|x>>|<arg|x>>

    <arg|y>
  </macro>>

  <\active*>
    <\src-comment>
      Unnumbered buttons
    </src-comment>
  </active*>

  <assign|render-button|<macro|state|off|on|<with|locus-color|preserve|<action|<if|<arg|state>|<arg|on>|<arg|off>>|mouse-toggle-button|<arg|state>>>>>

  \;

  <assign|button-box-off|\<box\>>

  <assign|button-box-on|\<blacksquare\>>

  <assign|button-box-cross|\<boxtimes\>>

  <assign|button-box|<macro|state|<render-button|<arg|state>|<value|button-box-off>|<value|button-box-on>>>>

  <assign|button-box*|<macro|state|<render-button|<arg|state>|<value|button-box-off>|<value|button-box-cross>>>>

  \;

  <assign|button-circle-off|\<#25CB\>>

  <assign|button-circle-on|\<#25CF\>>

  <assign|button-circle-off*|\<oempty\>>

  <assign|button-circle-cross|\<otimes\>>

  <assign|button-circle|<macro|state|<render-button|<arg|state>|<value|button-circle-off>|<value|button-circle-on>>>>

  <assign|button-circle*|<macro|state|<render-button|<arg|state>|<value|button-circle-off*>|<value|button-circle-cross>>>>

  <\active*>
    <\src-comment>
      Numbered buttons
    </src-comment>
  </active*>

  <assign|button-nr|0>

  <assign|circled-button-padding|0.5spc>

  <assign|render-circled-button|<macro|state|text|sep|<with|ornament-shape|rounded|ornament-border|<if|<arg|state>|1ln|0ln>|ornament-hpadding|<value|circled-button-padding>|ornament-vpadding|<value|circled-button-padding>|locus-color|preserve|<resize|<ornament|<action|<arg|text>|mouse-toggle-button|<arg|state>>><shift|<arg|sep>|<minus|<value|ornament-hpadding>>|>|<plus|1r|-1tab>|||>><assign|button-nr|<plus|<value|button-nr>|1>>>>

  \;

  <assign|button-arabic-sep|>

  <assign|button-alpha-sep|>

  <assign|button-Alpha-sep|>

  <assign|button-roman-sep|>

  <assign|button-Roman-sep|>

  <assign|button-arabic|<macro|state|<render-circled-button|<arg|state>|<number|<plus|<value|button-nr>|1>|arabic>|<value|button-arabic-sep>>>>

  <assign|button-alpha|<macro|state|<render-circled-button|<arg|state>|<with|font-shape|italic|<number|<plus|<value|button-nr>|1>|alpha><value|button-alpha-sep>><resize|<phantom|.>|||0.001em|>|>>>

  <assign|button-Alpha|<macro|state|<render-circled-button|<arg|state>|<with|font-shape|italic|<number|<plus|<value|button-nr>|1>|Alpha><value|button-Alpha-sep>><resize|<phantom|.>|||0.001em|>|>>>

  <assign|button-roman|<macro|state|<render-circled-button|<arg|state>|<number|<plus|<value|button-nr>|1>|roman>|<value|button-roman-sep>>>>

  <assign|button-Roman|<macro|state|<render-circled-button|<arg|state>|<number|<plus|<value|button-nr>|1>|Roman>|<value|button-Roman-sep>>>>

  <\active*>
    <\src-comment>
      Button themes
    </src-comment>
  </active*>

  <assign|button|<value|button-box>>

  <assign|with-button-box|<macro|body|<with|button|<value|button-box>|<arg|body>>>>

  <assign|with-button-box*|<macro|body|<with|button|<value|button-box*>|<arg|body>>>>

  <assign|with-button-circle|<macro|body|<with|button|<value|button-circle>|<arg|body>>>>

  <assign|with-button-circle*|<macro|body|<with|button|<value|button-circle*>|<arg|body>>>>

  <assign|with-button-arabic|<macro|body|<with|button|<value|button-arabic>|<arg|body>>>>

  <assign|with-button-alpha|<macro|body|<with|button|<value|button-alpha>|<arg|body>>>>

  <assign|with-button-Alpha|<macro|body|<with|button|<value|button-Alpha>|<arg|body>>>>

  <assign|with-button-roman|<macro|body|<with|button|<value|button-roman>|<arg|body>>>>

  <assign|with-button-Roman|<macro|body|<with|button|<value|button-Roman>|<arg|body>>>>

  <\active*>
    <\src-comment>
      Multiple choice environments
    </src-comment>
  </active*>

  <assign|mc-field-sep| >

  <assign|mc-field|<macro|state|text|<button|<arg|state>><value|mc-field-sep><arg|text>>>

  <assign|mc-wide-field|<macro|state|text|<with|par-left|<plus|<value|par-left>|<value|item-hsep>>|<surround|<with|par-first|<minus|<item-hsep>>|<yes-indent>><resize|<button|<arg|state>>|<minus|1r|<minus|<item-hsep>|0.5fn>>||<plus|1r|0.5fn>|>||<arg|text>>>>>

  <drd-props|mc-field|arity|2|accessible|1|border|no>

  \;

  <assign|mc-basic-sep|2em>

  <assign|mc-basic-one|<macro|a|<hgroup|<arg|a>><space|<value|mc-basic-sep>>
  >>

  <assign|mc-basic|<xmacro|args|<with|dummy|<value|mc-basic-sep>|button-nr|0|<map-args|mc-basic-one|concat|args>>>>

  <assign|mcs-basic|<xmacro|args|<with|dummy|<value|mc-basic-sep>|button-nr|0|<map-args|mc-basic-one|concat|args>>>>

  <drd-props|mc-basic|arity|<tuple|repeat|1|1>|accessible|all>

  <drd-props|mcs-basic|arity|<tuple|repeat|1|1>|accessible|all>

  \;

  <assign|mc-std-cols|5>

  <assign|mc-std-one|<macro|a|nr|<resize|<arg|a>|||<over|0.9999par|<value|mc-std-cols>>|><if|<equal|<mod|<plus|<arg|nr>|1>|<value|mc-std-cols>>|0>|<line-break>>>>

  <assign|mc-std|<xmacro|args|<with|dummy|<value|mc-std-cols>|button-nr|0|<map-args|mc-std-one|concat|args>>>>

  <assign|mcs-std|<xmacro|args|<with|dummy|<value|mc-std-cols>|button-nr|0|<map-args|mc-std-one|concat|args>>>>

  <drd-props|mc-std|arity|<tuple|repeat|1|1>|accessible|all>

  <drd-props|mcs-std|arity|<tuple|repeat|1|1>|accessible|all>

  \;

  <assign|mc-list-one|<macro|a|<with|mc-field|<value|mc-wide-field>|<arg|a>>>>

  <assign|mc-list|<xmacro|args|<surround||<right-flush>|<with|button-nr|0|<map-args|mc-list-one|document|args>>>>>

  <assign|mcs-list|<xmacro|args|<surround||<right-flush>|<with|button-nr|0|<map-args|mc-list-one|document|args>>>>>

  <drd-props|mc-list|arity|<tuple|repeat|1|1>|accessible|all>

  <drd-props|mcs-list|arity|<tuple|repeat|1|1>|accessible|all>

  \;
</body>

<\initial>
  <\collection>
    <associate|preamble|true>
    <associate|src-special|normal>
  </collection>
</initial>