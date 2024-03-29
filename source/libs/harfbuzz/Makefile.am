## $Id: Makefile.am 64756 2022-10-19 21:15:26Z kakuto $
## Proxy Makefile.am to build harfbuzz for TeX Live.
##
##   Copyright 2016-2017 Karl Berry <tex-live@tug.org>
##   Copyright 2012-2015 Peter Breitenlohner <tex-live@tug.org>
##
##   This file is free software; the copyright holder
##   gives unlimited permission to copy and/or distribute it,
##   with or without modifications, as long as this notice is preserved.
##
## We want to re-distribute the whole original harfbuzz source tree.
##
EXTRA_DIST = $(HARFBUZZ_TREE)

## Changes applied to the original source tree
##
EXTRA_DIST += TLpatches

HARFBUZZ_SRC = $(HARFBUZZ_TREE)/src

# Files not to be distributed
include $(srcdir)/../../am/dist_hook.am
NEVER_NAMES += $(NEVER_NAMES_SUB)

SUBDIRS = . include

noinst_LIBRARIES = libharfbuzz.a

## common
AM_CPPFLAGS = -DHB_NO_MT -DHAVE_FALLBACK=1 \
	-I$(top_srcdir)/$(HARFBUZZ_SRC)
## For luahbtex we need this (and the rest ?)
AM_CXXFLAGS = $(VISIBILITY_CXXFLAGS) $(WARNING_CXXFLAGS)

libharfbuzz_dependencies =
libharfbuzz_a_SOURCES =  \
	@HARFBUZZ_TREE@/src/hb-algs.hh \
	@HARFBUZZ_TREE@/src/hb-atomic.hh \
	@HARFBUZZ_TREE@/src/hb-bimap.hh \
	@HARFBUZZ_TREE@/src/hb-bit-page.hh \
	@HARFBUZZ_TREE@/src/hb-bit-set-invertible.hh \
	@HARFBUZZ_TREE@/src/hb-bit-set.hh \
	@HARFBUZZ_TREE@/src/hb-blob.hh \
	@HARFBUZZ_TREE@/src/hb-blob.cc \
	@HARFBUZZ_TREE@/src/hb-buffer.hh \
	@HARFBUZZ_TREE@/src/hb-buffer-serialize.cc \
	@HARFBUZZ_TREE@/src/hb-buffer-verify.cc \
	@HARFBUZZ_TREE@/src/hb-buffer.cc \
	@HARFBUZZ_TREE@/src/hb-cache.hh \
	@HARFBUZZ_TREE@/src/hb-cplusplus.hh \
	@HARFBUZZ_TREE@/src/hb-cff-interp-common.hh \
	@HARFBUZZ_TREE@/src/hb-cff-interp-cs-common.hh \
	@HARFBUZZ_TREE@/src/hb-cff-interp-dict-common.hh \
	@HARFBUZZ_TREE@/src/hb-cff1-interp-cs.hh \
	@HARFBUZZ_TREE@/src/hb-cff2-interp-cs.hh \
	@HARFBUZZ_TREE@/src/hb-common.cc \
	@HARFBUZZ_TREE@/src/hb-config.hh \
	@HARFBUZZ_TREE@/src/hb-debug.hh \
	@HARFBUZZ_TREE@/src/hb-dispatch.hh \
	@HARFBUZZ_TREE@/src/hb-draw.cc \
	@HARFBUZZ_TREE@/src/hb-draw.hh \
	@HARFBUZZ_TREE@/src/hb-face.hh \
	@HARFBUZZ_TREE@/src/hb-face.cc \
	@HARFBUZZ_TREE@/src/hb-font.hh \
	@HARFBUZZ_TREE@/src/hb-font.cc \
	@HARFBUZZ_TREE@/src/hb-iter.hh \
	@HARFBUZZ_TREE@/src/hb-kern.hh \
	@HARFBUZZ_TREE@/src/hb-map.hh \
	@HARFBUZZ_TREE@/src/hb-map.cc \
	@HARFBUZZ_TREE@/src/hb-machinery.hh \
	@HARFBUZZ_TREE@/src/hb-meta.hh \
	@HARFBUZZ_TREE@/src/hb-ms-feature-ranges.hh \
	@HARFBUZZ_TREE@/src/hb-mutex.hh \
	@HARFBUZZ_TREE@/src/hb-null.hh \
	@HARFBUZZ_TREE@/src/hb-number-parser.hh \
	@HARFBUZZ_TREE@/src/hb-number.cc \
	@HARFBUZZ_TREE@/src/hb-number.hh \
	@HARFBUZZ_TREE@/src/hb-object.hh \
	@HARFBUZZ_TREE@/src/hb-open-file.hh \
	@HARFBUZZ_TREE@/src/hb-open-type.hh \
	@HARFBUZZ_TREE@/src/hb-ot-cff-common.hh \
	@HARFBUZZ_TREE@/src/hb-ot-cff1-std-str.hh \
	@HARFBUZZ_TREE@/src/hb-ot-cff1-table.cc \
	@HARFBUZZ_TREE@/src/hb-ot-cff1-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-cff2-table.cc \
	@HARFBUZZ_TREE@/src/hb-ot-cff2-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-gasp-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color-cbdt-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color-colrv1-closure.hh \
	@HARFBUZZ_TREE@/src/hb-ot-cmap-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-face.cc \
	@HARFBUZZ_TREE@/src/hb-ot-face.hh \
	@HARFBUZZ_TREE@/src/hb-ot-face-table-list.hh \
	@HARFBUZZ_TREE@/src/hb-ot-glyf-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-hdmx-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-head-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-hhea-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-hmtx-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-kern-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-maxp-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-name-language-static.hh \
	@HARFBUZZ_TREE@/src/hb-ot-name-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-stat-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-name-language.hh \
	@HARFBUZZ_TREE@/src/hb-ot-name.cc \
	@HARFBUZZ_TREE@/src/hb-ot-os2-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-os2-unicode-ranges.hh \
	@HARFBUZZ_TREE@/src/hb-pool.hh \
	@HARFBUZZ_TREE@/src/hb-ot-post-macroman.hh \
	@HARFBUZZ_TREE@/src/hb-ot-post-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-post-table-v2subset.hh \
	@HARFBUZZ_TREE@/src/hb-ot-tag.cc \
	@HARFBUZZ_TREE@/src/hb-ot-tag-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var-common.hh \
	@HARFBUZZ_TREE@/src/hb-sanitize.hh \
	@HARFBUZZ_TREE@/src/hb-serialize.hh \
	@HARFBUZZ_TREE@/src/hb-set-digest.hh \
	@HARFBUZZ_TREE@/src/hb-set.hh \
	@HARFBUZZ_TREE@/src/hb-set.cc \
	@HARFBUZZ_TREE@/src/hb-shape.cc \
	@HARFBUZZ_TREE@/src/hb-shape-plan.hh \
	@HARFBUZZ_TREE@/src/hb-shape-plan.cc \
	@HARFBUZZ_TREE@/src/hb-shaper-list.hh \
	@HARFBUZZ_TREE@/src/hb-shaper-impl.hh \
	@HARFBUZZ_TREE@/src/hb-shaper.hh \
	@HARFBUZZ_TREE@/src/hb-shaper.cc \
	@HARFBUZZ_TREE@/src/hb-static.cc \
	@HARFBUZZ_TREE@/src/hb-string-array.hh \
	@HARFBUZZ_TREE@/src/hb-style.cc \
	@HARFBUZZ_TREE@/src/hb-subset-accelerator.hh \
	@HARFBUZZ_TREE@/src/hb-subset-cff-common.cc \
	@HARFBUZZ_TREE@/src/hb-subset-cff-common.hh \
	@HARFBUZZ_TREE@/src/hb-subset-cff1.cc \
	@HARFBUZZ_TREE@/src/hb-subset-cff1.hh \
	@HARFBUZZ_TREE@/src/hb-subset-cff2.cc \
	@HARFBUZZ_TREE@/src/hb-subset-cff2.hh \
	@HARFBUZZ_TREE@/src/hb-subset-input.hh \
	@HARFBUZZ_TREE@/src/hb-subset.hh \
	@HARFBUZZ_TREE@/src/hb-ucd-table.hh \
	@HARFBUZZ_TREE@/src/hb-ucd.cc \
	@HARFBUZZ_TREE@/src/hb-unicode.hh \
	@HARFBUZZ_TREE@/src/hb-unicode.cc \
	@HARFBUZZ_TREE@/src/hb-unicode-emoji-table.hh \
	@HARFBUZZ_TREE@/src/hb-vector.hh \
	@HARFBUZZ_TREE@/src/hb-utf.hh \
	@HARFBUZZ_TREE@/src/hb-buffer-deserialize-json.hh \
	@HARFBUZZ_TREE@/src/hb-buffer-deserialize-text.hh \
	@HARFBUZZ_TREE@/src/hb-fallback-shape.cc \
	@HARFBUZZ_TREE@/src/hb.hh

## native OpenType Layout backend
libharfbuzz_a_SOURCES += \
	@HARFBUZZ_TREE@/src/hb-aat-layout.cc \
	@HARFBUZZ_TREE@/src/hb-aat-layout-common.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-ankr-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-bsln-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-feat-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-just-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-kerx-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-morx-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-opbd-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout-trak-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-layout.hh \
	@HARFBUZZ_TREE@/src/hb-aat-ltag-table.hh \
	@HARFBUZZ_TREE@/src/hb-aat-map.cc \
	@HARFBUZZ_TREE@/src/hb-aat-map.hh \
	@HARFBUZZ_TREE@/src/hb-array.hh \
	@HARFBUZZ_TREE@/src/hb-ot-font.cc \
	@HARFBUZZ_TREE@/src/hb-ot-layout.cc \
	@HARFBUZZ_TREE@/src/hb-ot-layout-base-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-common.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-gdef-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-gpos-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-gsubgpos.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-gsub-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout-jstf-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-layout.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color.cc \
	@HARFBUZZ_TREE@/src/hb-ot-color-colr-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color-cpal-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color-sbix-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-color-svg-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-map.cc \
	@HARFBUZZ_TREE@/src/hb-ot-map.hh \
	@HARFBUZZ_TREE@/src/hb-ot-math.cc \
	@HARFBUZZ_TREE@/src/hb-ot-math-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-meta-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-meta.cc \
	@HARFBUZZ_TREE@/src/hb-ot-metrics.cc \
	@HARFBUZZ_TREE@/src/hb-ot-metrics.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shape.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic-fallback.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic-joining-list.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic-pua.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic-win1256.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-arabic.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-default.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-hangul.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-hebrew.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-indic-machine.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-indic-table.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-indic.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-indic.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-khmer-machine.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-khmer.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-myanmar-machine.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-myanmar.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-syllabic.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-syllabic.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-thai.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-use-machine.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-use-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-use.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-vowel-constraints.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shaper-vowel-constraints.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shaper.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shape-normalize.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shape-normalize.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shape-fallback.hh \
	@HARFBUZZ_TREE@/src/hb-ot-shape-fallback.cc \
	@HARFBUZZ_TREE@/src/hb-ot-shape.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var.cc \
	@HARFBUZZ_TREE@/src/hb-ot-var-avar-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var-fvar-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var-gvar-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var-hvar-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-var-mvar-table.hh \
	@HARFBUZZ_TREE@/src/hb-ot-vorg-table.hh
##
libharfbuzz_a_SOURCES += \
	@HARFBUZZ_TREE@/src/OT/glyf/glyf.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/glyf-helpers.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/loca.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/path-builder.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/Glyph.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/GlyphHeader.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/SimpleGlyph.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/CompositeGlyph.hh \
	@HARFBUZZ_TREE@/src/OT/glyf/SubsetGlyph.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/Common/Coverage.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/Common/CoverageFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/Common/CoverageFormat2.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/Common/RangeRecord.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/Common.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/Sequence.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/SingleSubstFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/SingleSubstFormat2.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/SingleSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/MultipleSubstFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/MultipleSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/AlternateSubstFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/AlternateSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/AlternateSet.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/LigatureSubstFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/LigatureSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/LigatureSet.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/Ligature.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/ReverseChainSingleSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/ReverseChainSingleSubstFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/ContextSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/ChainContextSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/ExtensionSubst.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/SubstLookupSubTable.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/SubstLookup.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GSUB/GSUB.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/AnchorFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/AnchorFormat2.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/AnchorFormat3.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/Anchor.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/AnchorMatrix.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/ChainContextPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/Common.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/ContextPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/CursivePosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/CursivePos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/ExtensionPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/GPOS.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/LigatureArray.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkArray.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkBasePosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkBasePos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkLigPosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkLigPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkMarkPosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkMarkPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/MarkRecord.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PairPosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PairPosFormat2.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PairPos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PairSet.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PairValueRecord.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PosLookup.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/PosLookupSubTable.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/SinglePosFormat1.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/SinglePosFormat2.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/SinglePos.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/GPOS/ValueFormat.hh \
	@HARFBUZZ_TREE@/src/OT/Layout/types.hh \
	@HARFBUZZ_TREE@/src/graph/graph.hh \
	@HARFBUZZ_TREE@/src/graph/serialize.hh


## Graphite library
AM_CPPFLAGS += $(GRAPHITE2_INCLUDES)
libharfbuzz_dependencies += $(GRAPHITE2_DEPEND)
libharfbuzz_a_SOURCES += @HARFBUZZ_TREE@/src/hb-graphite2.cc

$(libharfbuzz_a_OBJECTS): config.force

if build
check_PROGRAMS = hbtest
dist_check_SCRIPTS = harfbuzz.test
TESTS = harfbuzz.test
endif build
harfbuzz.log: hbtest$(EXEEXT)

hbtest_SOURCES = hbtest.c

# Force Automake to use CXXLD for linking
nodist_EXTRA_hbtest_SOURCES = dummy.cxx

hbtest_CPPFLAGS = -Iinclude $(GRAPHITE2_INCLUDES)

LDADD = libharfbuzz.a $(GRAPHITE2_LIBS)

## Rebuild libgraphite2
@GRAPHITE2_RULE@

# Reconfig
reconfig_prereq = $(libharfbuzz_dependencies)
DISTCLEANFILES =

include $(srcdir)/../../am/reconfig.am

# Rebuild
rebuild_prereq =
rebuild_target = all
CLEANFILES =

include $(srcdir)/../../am/rebuild.am

