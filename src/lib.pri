include($$PWD/config.pri)

CONFIG += c++11 create_pc create_prl no_install_prl

isEmpty(LIB_INSTALL_DIR) {
    target.path = $$PREFIX/lib
} else {
    target.path = $$LIB_INSTALL_DIR
}

message("Build dtkwidget version: $${VERSION}")

QMAKE_PKGCONFIG_LIBDIR = $$target.path
QMAKE_PKGCONFIG_VERSION = $$VERSION
QMAKE_PKGCONFIG_DESTDIR = pkgconfig

isEmpty(INCLUDE_INSTALL_DIR) {
    DTK_INCLUDEPATH = $$PREFIX/include/libdtk-$${VER_MAJ}.$${VER_MIN}.$${VER_PAT}
} else {
    DTK_INCLUDEPATH = $$INCLUDE_INSTALL_DIR/libdtk-$${VER_MAJ}.$${VER_MIN}.$${VER_PAT}
}

load(configure)
qtCompileTest(libdframeworkdbus) {
    DEFINES += DBUS_VERSION_0_4_2
}

INSTALLS += includes target

win32* {
    CONFIG += staticlib
}
