<TeXmacs|1.0.4>

<style|source>

<\body>
  <active*|<\src-title>
    <src-package|section-book|1.0>

    <\src-purpose>
      Sectional markup for books.
    </src-purpose>

    <src-copyright|1998--2004|Joris van der Hoeven>

    <\src-license>
      This <TeXmacs> style package falls under the <hlink|GNU general public
      license|$TEXMACS_PATH/LICENSE> and comes WITHOUT ANY WARRANTY
      WHATSOEVER. If you do not have a copy of the license, then write to the
      Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
      02111-1307, USA.
    </src-license>
  </src-title>>

  <use-package|section-base>

  <assign|sectional-short-style|<macro|false>>

  <assign|chapter-clean|<macro|<reset-section><reset-std-env>>>

  <assign|display-std-env|<macro|nr|<chapter-prefix><arg|nr>>>

  <\active*>
    <\src-comment>
      Parts.
    </src-comment>
  </active*>

  <assign|part-title-sub|<macro|body|<style-with|src-compact|none|<new-page*><no-indent><assign|page-this-header|><assign|page-this-footer|><new-line><no-indent><vspace*|0.25pag><with|math-font-series|bold|font-series|bold|font-size|3|<arg|body>><vspace|0.05pag><no-indent*><new-page>>>>

  <assign|part-title|<macro|name|<part-title-sub|<style-with|src-compact|none|<vspace|0.05pag><new-line><htab|0fn><arg|name><htab|0fn>>>>>

  <assign|part-numbered-title|<macro|name|<part-title-sub|<style-with|src-compact|none|<htab|0fn><part-text>
  <the-part><htab|0fn><vspace|0.1pag><new-line><htab|0fn><arg|name><htab|0fn>>>>>

  <\active*>
    <\src-comment>
      Chapters.
    </src-comment>
  </active*>

  <assign|chapter-title|<macro|name|<style-with|src-compact|none|<new-page*><no-indent><new-line><no-indent><vspace*|5fn><with|math-font-series|bold|font-series|bold|<really-huge|<arg|name>>><vspace|2fn><no-page-break><no-indent*>>>>

  <assign|chapter-numbered-title|<macro|title|<style-with|src-compact|none|<chapter-title|<chapter-text>
  <the-chapter><vspace|1fn><new-line><arg|title>>>>>

  <assign|appendix-numbered-title|<macro|title|<style-with|src-compact|none|<chapter-title|<appendix-text>
  <the-appendix><vspace|1fn><new-line><arg|title>>>>>

  <\active*>
    <\src-comment>
      Sections.
    </src-comment>
  </active*>

  <assign|section-title|<macro|name|<style-with|src-compact|none|<sectional-normal-bold|<vspace*|3fn><very-large|<arg|name>><vspace|1fn>>>>>

  <assign|subsection-title|<macro|name|<style-with|src-compact|none|<sectional-normal-bold|<vspace*|2fn><large|<arg|name>><vspace|0.5fn>>>>>

  <assign|subsubsection-title|<macro|name|<style-with|src-compact|none|<sectional-normal-bold|<vspace*|1fn><arg|name><vspace|0.5fn>>>>>

  <\active*>
    <\src-comment>
      Paragraphs.
    </src-comment>
  </active*>

  <assign|paragraph-title|<macro|name|<style-with|src-compact|none|<sectional-short-bold|<vspace*|0.5fn><arg|name><paragraph-sep>>>>>

  <assign|subparagraph-title|<macro|name|<style-with|src-compact|none|<sectional-short-bold|<vspace*|0.25fn><arg|name><subparagraph-sep>>>>>

  \;
</body>

<\initial>
  <\collection>
    <associate|preamble|true>
  </collection>
</initial>