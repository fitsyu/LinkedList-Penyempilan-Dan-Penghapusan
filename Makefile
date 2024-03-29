#############################################################################
# Makefile for building: PolyMorphicOne
# Generated by qmake (2.01a) (Qt 4.8.3) on: Sat Jan 11 17:30:53 2014
# Project:  PolyMorphicOne.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile PolyMorphicOne.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		widget.cpp \
		BareNode.cpp \
		BareList.cpp \
		Item.cpp \
		ItemNode.cpp \
		ItemLinker.cpp \
		Box.cpp \
		BoxLinkedList.cpp \
		clickablelabel.cpp \
		BoxAvail.cpp \
		BoxTable.cpp \
		banner.cpp moc_widget.cpp \
		moc_Box.cpp \
		moc_Item.cpp \
		moc_ItemNode.cpp \
		moc_ItemLinker.cpp \
		moc_BareList.cpp \
		moc_clickablelabel.cpp \
		moc_banner.cpp \
		qrc_Resources.cpp
OBJECTS       = main.o \
		widget.o \
		BareNode.o \
		BareList.o \
		Item.o \
		ItemNode.o \
		ItemLinker.o \
		Box.o \
		BoxLinkedList.o \
		clickablelabel.o \
		BoxAvail.o \
		BoxTable.o \
		banner.o \
		moc_widget.o \
		moc_Box.o \
		moc_Item.o \
		moc_ItemNode.o \
		moc_ItemLinker.o \
		moc_BareList.o \
		moc_clickablelabel.o \
		moc_banner.o \
		qrc_Resources.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		PolyMorphicOne.pro
QMAKE_TARGET  = PolyMorphicOne
DESTDIR       = 
TARGET        = PolyMorphicOne

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: PolyMorphicOne.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile PolyMorphicOne.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile PolyMorphicOne.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/PolyMorphicOne1.0.0 || $(MKDIR) .tmp/PolyMorphicOne1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/PolyMorphicOne1.0.0/ && $(COPY_FILE) --parents widget.h Box.h Item.h BoxTable.h BoxAvail.h BoxLinkedList.h ItemNode.h ItemLinker.h BareList.h BareNode.h clickablelabel.h banner.h .tmp/PolyMorphicOne1.0.0/ && $(COPY_FILE) --parents Resources.qrc .tmp/PolyMorphicOne1.0.0/ && $(COPY_FILE) --parents main.cpp widget.cpp BareNode.cpp BareList.cpp Item.cpp ItemNode.cpp ItemLinker.cpp Box.cpp BoxLinkedList.cpp clickablelabel.cpp BoxAvail.cpp BoxTable.cpp banner.cpp .tmp/PolyMorphicOne1.0.0/ && (cd `dirname .tmp/PolyMorphicOne1.0.0` && $(TAR) PolyMorphicOne1.0.0.tar PolyMorphicOne1.0.0 && $(COMPRESS) PolyMorphicOne1.0.0.tar) && $(MOVE) `dirname .tmp/PolyMorphicOne1.0.0`/PolyMorphicOne1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/PolyMorphicOne1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_widget.cpp moc_Box.cpp moc_Item.cpp moc_ItemNode.cpp moc_ItemLinker.cpp moc_BareList.cpp moc_clickablelabel.cpp moc_banner.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_widget.cpp moc_Box.cpp moc_Item.cpp moc_ItemNode.cpp moc_ItemLinker.cpp moc_BareList.cpp moc_clickablelabel.cpp moc_banner.cpp
moc_widget.cpp: BareList.h \
		BareNode.h \
		BoxTable.h \
		Box.h \
		Item.h \
		BoxLinkedList.h \
		BoxAvail.h \
		widget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) widget.h -o moc_widget.cpp

moc_Box.cpp: BareNode.h \
		Item.h \
		BareList.h \
		Box.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Box.h -o moc_Box.cpp

moc_Item.cpp: BareList.h \
		BareNode.h \
		Item.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) Item.h -o moc_Item.cpp

moc_ItemNode.cpp: Item.h \
		BareList.h \
		BareNode.h \
		clickablelabel.h \
		ItemNode.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) ItemNode.h -o moc_ItemNode.cpp

moc_ItemLinker.cpp: Item.h \
		BareList.h \
		BareNode.h \
		clickablelabel.h \
		ItemLinker.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) ItemLinker.h -o moc_ItemLinker.cpp

moc_BareList.cpp: BareNode.h \
		BareList.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) BareList.h -o moc_BareList.cpp

moc_clickablelabel.cpp: BareList.h \
		BareNode.h \
		clickablelabel.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) clickablelabel.h -o moc_clickablelabel.cpp

moc_banner.cpp: banner.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) banner.h -o moc_banner.cpp

compiler_rcc_make_all: qrc_Resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_Resources.cpp
qrc_Resources.cpp: Resources.qrc \
		Table.png \
		LinkedList.png \
		Banner.gif \
		Avail.png
	/usr/bin/rcc -name Resources Resources.qrc -o qrc_Resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

main.o: main.cpp banner.h \
		widget.h \
		BareList.h \
		BareNode.h \
		BoxTable.h \
		Box.h \
		Item.h \
		BoxLinkedList.h \
		BoxAvail.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

widget.o: widget.cpp widget.h \
		BareList.h \
		BareNode.h \
		BoxTable.h \
		Box.h \
		Item.h \
		BoxLinkedList.h \
		BoxAvail.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o widget.o widget.cpp

BareNode.o: BareNode.cpp BareNode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BareNode.o BareNode.cpp

BareList.o: BareList.cpp BareList.h \
		BareNode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BareList.o BareList.cpp

Item.o: Item.cpp Item.h \
		BareList.h \
		BareNode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Item.o Item.cpp

ItemNode.o: ItemNode.cpp ItemNode.h \
		Item.h \
		BareList.h \
		BareNode.h \
		clickablelabel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ItemNode.o ItemNode.cpp

ItemLinker.o: ItemLinker.cpp ItemLinker.h \
		Item.h \
		BareList.h \
		BareNode.h \
		clickablelabel.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ItemLinker.o ItemLinker.cpp

Box.o: Box.cpp Box.h \
		BareNode.h \
		Item.h \
		BareList.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Box.o Box.cpp

BoxLinkedList.o: BoxLinkedList.cpp BoxLinkedList.h \
		Box.h \
		BareNode.h \
		Item.h \
		BareList.h \
		ItemNode.h \
		clickablelabel.h \
		ItemLinker.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoxLinkedList.o BoxLinkedList.cpp

clickablelabel.o: clickablelabel.cpp clickablelabel.h \
		BareList.h \
		BareNode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o clickablelabel.o clickablelabel.cpp

BoxAvail.o: BoxAvail.cpp BoxAvail.h \
		Box.h \
		BareNode.h \
		Item.h \
		BareList.h \
		ItemNode.h \
		clickablelabel.h \
		ItemLinker.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoxAvail.o BoxAvail.cpp

BoxTable.o: BoxTable.cpp BoxTable.h \
		Box.h \
		BareNode.h \
		Item.h \
		BareList.h \
		ItemNode.h \
		clickablelabel.h \
		ItemLinker.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoxTable.o BoxTable.cpp

banner.o: banner.cpp banner.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o banner.o banner.cpp

moc_widget.o: moc_widget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_widget.o moc_widget.cpp

moc_Box.o: moc_Box.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Box.o moc_Box.cpp

moc_Item.o: moc_Item.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Item.o moc_Item.cpp

moc_ItemNode.o: moc_ItemNode.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ItemNode.o moc_ItemNode.cpp

moc_ItemLinker.o: moc_ItemLinker.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ItemLinker.o moc_ItemLinker.cpp

moc_BareList.o: moc_BareList.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_BareList.o moc_BareList.cpp

moc_clickablelabel.o: moc_clickablelabel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_clickablelabel.o moc_clickablelabel.cpp

moc_banner.o: moc_banner.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_banner.o moc_banner.cpp

qrc_Resources.o: qrc_Resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_Resources.o qrc_Resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

