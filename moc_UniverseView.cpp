/****************************************************************************
** Meta object code from reading C++ file 'UniverseView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/main/UniverseView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UniverseView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UniverseView_t {
    QByteArrayData data[142];
    char stringdata0[2247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UniverseView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UniverseView_t qt_meta_stringdata_UniverseView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UniverseView"
QT_MOC_LITERAL(1, 13, 11), // "timeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 25), // "simulationDateTimeChanged"
QT_MOC_LITERAL(4, 52, 16), // "timeScaleChanged"
QT_MOC_LITERAL(5, 69, 17), // "pauseStateChanged"
QT_MOC_LITERAL(6, 87, 20), // "contextMenuTriggered"
QT_MOC_LITERAL(7, 108, 1), // "x"
QT_MOC_LITERAL(8, 110, 1), // "y"
QT_MOC_LITERAL(9, 112, 11), // "BodyObject*"
QT_MOC_LITERAL(10, 124, 4), // "body"
QT_MOC_LITERAL(11, 129, 24), // "limitingMagnitudeChanged"
QT_MOC_LITERAL(12, 154, 19), // "ambientLightChanged"
QT_MOC_LITERAL(13, 174, 31), // "equatorialGridVisibilityChanged"
QT_MOC_LITERAL(14, 206, 32), // "centerIndicatorVisibilityChanged"
QT_MOC_LITERAL(15, 239, 21), // "recordingVideoChanged"
QT_MOC_LITERAL(16, 261, 26), // "recordedVideoLengthChanged"
QT_MOC_LITERAL(17, 288, 4), // "tick"
QT_MOC_LITERAL(18, 293, 9), // "setPaused"
QT_MOC_LITERAL(19, 303, 6), // "paused"
QT_MOC_LITERAL(20, 310, 14), // "setCurrentTime"
QT_MOC_LITERAL(21, 325, 12), // "setTimeScale"
QT_MOC_LITERAL(22, 338, 5), // "scale"
QT_MOC_LITERAL(23, 344, 17), // "setSimulationTime"
QT_MOC_LITERAL(24, 362, 4), // "tsec"
QT_MOC_LITERAL(25, 367, 21), // "setSimulationDateTime"
QT_MOC_LITERAL(26, 389, 8), // "dateTime"
QT_MOC_LITERAL(27, 398, 16), // "inertialObserver"
QT_MOC_LITERAL(28, 415, 7), // "checked"
QT_MOC_LITERAL(29, 423, 17), // "bodyFixedObserver"
QT_MOC_LITERAL(30, 441, 15), // "synodicObserver"
QT_MOC_LITERAL(31, 457, 14), // "lockedObserver"
QT_MOC_LITERAL(32, 472, 17), // "setObserverCenter"
QT_MOC_LITERAL(33, 490, 18), // "setMilkyWayVisible"
QT_MOC_LITERAL(34, 509, 25), // "setPlanetOrbitsVisibility"
QT_MOC_LITERAL(35, 535, 27), // "setEquatorialGridVisibility"
QT_MOC_LITERAL(36, 563, 21), // "setEclipticVisibility"
QT_MOC_LITERAL(37, 585, 28), // "setEquatorialPlaneVisibility"
QT_MOC_LITERAL(38, 614, 31), // "setPlanetographicGridVisibility"
QT_MOC_LITERAL(39, 646, 32), // "setConstellationFigureVisibility"
QT_MOC_LITERAL(40, 679, 30), // "setConstellationNameVisibility"
QT_MOC_LITERAL(41, 710, 21), // "setStarNameVisibility"
QT_MOC_LITERAL(42, 732, 18), // "setLabelVisibility"
QT_MOC_LITERAL(43, 751, 6), // "enable"
QT_MOC_LITERAL(44, 758, 32), // "setSurfaceFeatureLabelVisibility"
QT_MOC_LITERAL(45, 791, 28), // "setCenterIndicatorVisibility"
QT_MOC_LITERAL(46, 820, 10), // "setShadows"
QT_MOC_LITERAL(47, 831, 17), // "setEclipseShadows"
QT_MOC_LITERAL(48, 849, 16), // "setCloudsVisible"
QT_MOC_LITERAL(49, 866, 21), // "setAtmospheresVisible"
QT_MOC_LITERAL(50, 888, 15), // "setAmbientLight"
QT_MOC_LITERAL(51, 904, 10), // "brightness"
QT_MOC_LITERAL(52, 915, 14), // "setReflections"
QT_MOC_LITERAL(53, 930, 13), // "setStereoMode"
QT_MOC_LITERAL(54, 944, 10), // "StereoMode"
QT_MOC_LITERAL(55, 955, 10), // "stereoMode"
QT_MOC_LITERAL(56, 966, 22), // "setAntialiasingSamples"
QT_MOC_LITERAL(57, 989, 7), // "samples"
QT_MOC_LITERAL(58, 997, 11), // "setSunGlare"
QT_MOC_LITERAL(59, 1009, 20), // "setDiffractionSpikes"
QT_MOC_LITERAL(60, 1030, 16), // "setEarthMapMonth"
QT_MOC_LITERAL(61, 1047, 5), // "month"
QT_MOC_LITERAL(62, 1053, 11), // "setInfoText"
QT_MOC_LITERAL(63, 1065, 14), // "plotTrajectory"
QT_MOC_LITERAL(64, 1080, 14), // "vesta::Entity*"
QT_MOC_LITERAL(65, 1095, 15), // "const BodyInfo*"
QT_MOC_LITERAL(66, 1111, 4), // "info"
QT_MOC_LITERAL(67, 1116, 22), // "plotTrajectoryObserver"
QT_MOC_LITERAL(68, 1139, 20), // "clearTrajectoryPlots"
QT_MOC_LITERAL(69, 1160, 18), // "hasTrajectoryPlots"
QT_MOC_LITERAL(70, 1179, 15), // "setSelectedBody"
QT_MOC_LITERAL(71, 1195, 4), // "name"
QT_MOC_LITERAL(72, 1200, 18), // "gotoSelectedObject"
QT_MOC_LITERAL(73, 1219, 20), // "centerSelectedObject"
QT_MOC_LITERAL(74, 1240, 8), // "gotoHome"
QT_MOC_LITERAL(75, 1249, 12), // "setViewpoint"
QT_MOC_LITERAL(76, 1262, 10), // "Viewpoint*"
QT_MOC_LITERAL(77, 1273, 9), // "viewpoint"
QT_MOC_LITERAL(78, 1283, 14), // "setTimeDisplay"
QT_MOC_LITERAL(79, 1298, 15), // "TimeDisplayMode"
QT_MOC_LITERAL(80, 1314, 4), // "mode"
QT_MOC_LITERAL(81, 1319, 20), // "setLimitingMagnitude"
QT_MOC_LITERAL(82, 1340, 6), // "appMag"
QT_MOC_LITERAL(83, 1347, 17), // "setUpdateInterval"
QT_MOC_LITERAL(84, 1365, 4), // "msec"
QT_MOC_LITERAL(85, 1370, 10), // "findObject"
QT_MOC_LITERAL(86, 1381, 17), // "setGalleryVisible"
QT_MOC_LITERAL(87, 1399, 7), // "visible"
QT_MOC_LITERAL(88, 1407, 13), // "toggleGallery"
QT_MOC_LITERAL(89, 1421, 24), // "copyNextFrameToClipboard"
QT_MOC_LITERAL(90, 1446, 9), // "withAlpha"
QT_MOC_LITERAL(91, 1456, 16), // "setStatusMessage"
QT_MOC_LITERAL(92, 1473, 7), // "message"
QT_MOC_LITERAL(93, 1481, 6), // "setFOV"
QT_MOC_LITERAL(94, 1488, 4), // "fovY"
QT_MOC_LITERAL(95, 1493, 15), // "getSelectedBody"
QT_MOC_LITERAL(96, 1509, 14), // "getCentralBody"
QT_MOC_LITERAL(97, 1524, 14), // "setCentralBody"
QT_MOC_LITERAL(98, 1539, 19), // "setCentralBodyFixed"
QT_MOC_LITERAL(99, 1559, 9), // "trackBody"
QT_MOC_LITERAL(100, 1569, 14), // "trackBodyLevel"
QT_MOC_LITERAL(101, 1584, 29), // "createBodyDirectionVisualizer"
QT_MOC_LITERAL(102, 1614, 17), // "VisualizerObject*"
QT_MOC_LITERAL(103, 1632, 4), // "from"
QT_MOC_LITERAL(104, 1637, 6), // "target"
QT_MOC_LITERAL(105, 1644, 15), // "setStateFromUrl"
QT_MOC_LITERAL(106, 1660, 3), // "url"
QT_MOC_LITERAL(107, 1664, 27), // "setMouseClickEventProcessed"
QT_MOC_LITERAL(108, 1692, 8), // "accepted"
QT_MOC_LITERAL(109, 1701, 26), // "setMouseMoveEventProcessed"
QT_MOC_LITERAL(110, 1728, 8), // "realTime"
QT_MOC_LITERAL(111, 1737, 13), // "labelsVisible"
QT_MOC_LITERAL(112, 1751, 27), // "surfaceFeatureLabelsVisible"
QT_MOC_LITERAL(113, 1779, 22), // "centerIndicatorVisible"
QT_MOC_LITERAL(114, 1802, 27), // "constellationFiguresVisible"
QT_MOC_LITERAL(115, 1830, 25), // "constellationNamesVisible"
QT_MOC_LITERAL(116, 1856, 16), // "starNamesVisible"
QT_MOC_LITERAL(117, 1873, 21), // "equatorialGridVisible"
QT_MOC_LITERAL(118, 1895, 15), // "eclipticVisible"
QT_MOC_LITERAL(119, 1911, 7), // "shadows"
QT_MOC_LITERAL(120, 1919, 14), // "eclipseShadows"
QT_MOC_LITERAL(121, 1934, 11), // "reflections"
QT_MOC_LITERAL(122, 1946, 13), // "cloudsVisible"
QT_MOC_LITERAL(123, 1960, 18), // "atmospheresVisible"
QT_MOC_LITERAL(124, 1979, 8), // "sunGlare"
QT_MOC_LITERAL(125, 1988, 17), // "diffractionSpikes"
QT_MOC_LITERAL(126, 2006, 15), // "milkyWayVisible"
QT_MOC_LITERAL(127, 2022, 19), // "planetOrbitsVisible"
QT_MOC_LITERAL(128, 2042, 13), // "earthMapMonth"
QT_MOC_LITERAL(129, 2056, 14), // "simulationTime"
QT_MOC_LITERAL(130, 2071, 17), // "currentTimeString"
QT_MOC_LITERAL(131, 2089, 18), // "simulationDateTime"
QT_MOC_LITERAL(132, 2108, 9), // "timeScale"
QT_MOC_LITERAL(133, 2118, 17), // "limitingMagnitude"
QT_MOC_LITERAL(134, 2136, 12), // "ambientLight"
QT_MOC_LITERAL(135, 2149, 19), // "antialiasingSamples"
QT_MOC_LITERAL(136, 2169, 14), // "gotoObjectTime"
QT_MOC_LITERAL(137, 2184, 14), // "galleryVisible"
QT_MOC_LITERAL(138, 2199, 4), // "Mono"
QT_MOC_LITERAL(139, 2204, 10), // "SideBySide"
QT_MOC_LITERAL(140, 2215, 15), // "AnaglyphRedCyan"
QT_MOC_LITERAL(141, 2231, 15) // "AnaglyphCyanRed"

    },
    "UniverseView\0timeChanged\0\0"
    "simulationDateTimeChanged\0timeScaleChanged\0"
    "pauseStateChanged\0contextMenuTriggered\0"
    "x\0y\0BodyObject*\0body\0limitingMagnitudeChanged\0"
    "ambientLightChanged\0equatorialGridVisibilityChanged\0"
    "centerIndicatorVisibilityChanged\0"
    "recordingVideoChanged\0recordedVideoLengthChanged\0"
    "tick\0setPaused\0paused\0setCurrentTime\0"
    "setTimeScale\0scale\0setSimulationTime\0"
    "tsec\0setSimulationDateTime\0dateTime\0"
    "inertialObserver\0checked\0bodyFixedObserver\0"
    "synodicObserver\0lockedObserver\0"
    "setObserverCenter\0setMilkyWayVisible\0"
    "setPlanetOrbitsVisibility\0"
    "setEquatorialGridVisibility\0"
    "setEclipticVisibility\0"
    "setEquatorialPlaneVisibility\0"
    "setPlanetographicGridVisibility\0"
    "setConstellationFigureVisibility\0"
    "setConstellationNameVisibility\0"
    "setStarNameVisibility\0setLabelVisibility\0"
    "enable\0setSurfaceFeatureLabelVisibility\0"
    "setCenterIndicatorVisibility\0setShadows\0"
    "setEclipseShadows\0setCloudsVisible\0"
    "setAtmospheresVisible\0setAmbientLight\0"
    "brightness\0setReflections\0setStereoMode\0"
    "StereoMode\0stereoMode\0setAntialiasingSamples\0"
    "samples\0setSunGlare\0setDiffractionSpikes\0"
    "setEarthMapMonth\0month\0setInfoText\0"
    "plotTrajectory\0vesta::Entity*\0"
    "const BodyInfo*\0info\0plotTrajectoryObserver\0"
    "clearTrajectoryPlots\0hasTrajectoryPlots\0"
    "setSelectedBody\0name\0gotoSelectedObject\0"
    "centerSelectedObject\0gotoHome\0"
    "setViewpoint\0Viewpoint*\0viewpoint\0"
    "setTimeDisplay\0TimeDisplayMode\0mode\0"
    "setLimitingMagnitude\0appMag\0"
    "setUpdateInterval\0msec\0findObject\0"
    "setGalleryVisible\0visible\0toggleGallery\0"
    "copyNextFrameToClipboard\0withAlpha\0"
    "setStatusMessage\0message\0setFOV\0fovY\0"
    "getSelectedBody\0getCentralBody\0"
    "setCentralBody\0setCentralBodyFixed\0"
    "trackBody\0trackBodyLevel\0"
    "createBodyDirectionVisualizer\0"
    "VisualizerObject*\0from\0target\0"
    "setStateFromUrl\0url\0setMouseClickEventProcessed\0"
    "accepted\0setMouseMoveEventProcessed\0"
    "realTime\0labelsVisible\0"
    "surfaceFeatureLabelsVisible\0"
    "centerIndicatorVisible\0"
    "constellationFiguresVisible\0"
    "constellationNamesVisible\0starNamesVisible\0"
    "equatorialGridVisible\0eclipticVisible\0"
    "shadows\0eclipseShadows\0reflections\0"
    "cloudsVisible\0atmospheresVisible\0"
    "sunGlare\0diffractionSpikes\0milkyWayVisible\0"
    "planetOrbitsVisible\0earthMapMonth\0"
    "simulationTime\0currentTimeString\0"
    "simulationDateTime\0timeScale\0"
    "limitingMagnitude\0ambientLight\0"
    "antialiasingSamples\0gotoObjectTime\0"
    "galleryVisible\0Mono\0SideBySide\0"
    "AnaglyphRedCyan\0AnaglyphCyanRed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UniverseView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
      30,  634, // properties
       1,  754, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  414,    2, 0x06 /* Public */,
       3,    0,  415,    2, 0x06 /* Public */,
       4,    1,  416,    2, 0x06 /* Public */,
       5,    1,  419,    2, 0x06 /* Public */,
       6,    3,  422,    2, 0x06 /* Public */,
      11,    1,  429,    2, 0x06 /* Public */,
      12,    1,  432,    2, 0x06 /* Public */,
      13,    1,  435,    2, 0x06 /* Public */,
      14,    1,  438,    2, 0x06 /* Public */,
      15,    0,  441,    2, 0x06 /* Public */,
      16,    1,  442,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  445,    2, 0x0a /* Public */,
      18,    1,  446,    2, 0x0a /* Public */,
      20,    0,  449,    2, 0x0a /* Public */,
      21,    1,  450,    2, 0x0a /* Public */,
      23,    1,  453,    2, 0x0a /* Public */,
      25,    1,  456,    2, 0x0a /* Public */,
      27,    1,  459,    2, 0x0a /* Public */,
      29,    1,  462,    2, 0x0a /* Public */,
      30,    1,  465,    2, 0x0a /* Public */,
      31,    1,  468,    2, 0x0a /* Public */,
      32,    0,  471,    2, 0x0a /* Public */,
      33,    1,  472,    2, 0x0a /* Public */,
      34,    1,  475,    2, 0x0a /* Public */,
      35,    1,  478,    2, 0x0a /* Public */,
      36,    1,  481,    2, 0x0a /* Public */,
      37,    1,  484,    2, 0x0a /* Public */,
      38,    1,  487,    2, 0x0a /* Public */,
      39,    1,  490,    2, 0x0a /* Public */,
      40,    1,  493,    2, 0x0a /* Public */,
      41,    1,  496,    2, 0x0a /* Public */,
      42,    1,  499,    2, 0x0a /* Public */,
      44,    1,  502,    2, 0x0a /* Public */,
      45,    1,  505,    2, 0x0a /* Public */,
      46,    1,  508,    2, 0x0a /* Public */,
      47,    1,  511,    2, 0x0a /* Public */,
      48,    1,  514,    2, 0x0a /* Public */,
      49,    1,  517,    2, 0x0a /* Public */,
      50,    1,  520,    2, 0x0a /* Public */,
      50,    1,  523,    2, 0x0a /* Public */,
      52,    1,  526,    2, 0x0a /* Public */,
      53,    1,  529,    2, 0x0a /* Public */,
      56,    1,  532,    2, 0x0a /* Public */,
      58,    1,  535,    2, 0x0a /* Public */,
      59,    1,  538,    2, 0x0a /* Public */,
      60,    1,  541,    2, 0x0a /* Public */,
      62,    1,  544,    2, 0x0a /* Public */,
      63,    2,  547,    2, 0x0a /* Public */,
      67,    1,  552,    2, 0x0a /* Public */,
      68,    1,  555,    2, 0x0a /* Public */,
      69,    1,  558,    2, 0x0a /* Public */,
      70,    1,  561,    2, 0x0a /* Public */,
      72,    0,  564,    2, 0x0a /* Public */,
      73,    0,  565,    2, 0x0a /* Public */,
      74,    0,  566,    2, 0x0a /* Public */,
      75,    1,  567,    2, 0x0a /* Public */,
      78,    1,  570,    2, 0x0a /* Public */,
      81,    1,  573,    2, 0x0a /* Public */,
      83,    1,  576,    2, 0x0a /* Public */,
      85,    0,  579,    2, 0x0a /* Public */,
      86,    1,  580,    2, 0x0a /* Public */,
      88,    0,  583,    2, 0x0a /* Public */,
      89,    1,  584,    2, 0x0a /* Public */,
      89,    0,  587,    2, 0x2a /* Public | MethodCloned */,
      91,    1,  588,    2, 0x0a /* Public */,
      93,    1,  591,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      95,    0,  594,    2, 0x02 /* Public */,
      70,    1,  595,    2, 0x02 /* Public */,
      96,    0,  598,    2, 0x02 /* Public */,
      97,    1,  599,    2, 0x02 /* Public */,
      98,    1,  602,    2, 0x02 /* Public */,
      99,    1,  605,    2, 0x02 /* Public */,
     100,    1,  608,    2, 0x02 /* Public */,
     101,    2,  611,    2, 0x02 /* Public */,
      63,    1,  616,    2, 0x02 /* Public */,
      68,    1,  619,    2, 0x02 /* Public */,
      69,    1,  622,    2, 0x02 /* Public */,
     105,    1,  625,    2, 0x02 /* Public */,
     107,    1,  628,    2, 0x02 /* Public */,
     109,    1,  631,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 9,    7,    8,   10,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   24,
    QMetaType::Void, QMetaType::QDateTime,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Double,   51,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, 0x80000000 | 64, 0x80000000 | 65,   10,   66,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, 0x80000000 | 64,   10,
    QMetaType::Bool, 0x80000000 | 64,   10,
    QMetaType::Void, QMetaType::QString,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void, QMetaType::Double,   82,
    QMetaType::Void, QMetaType::UInt,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   87,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   92,
    QMetaType::Void, QMetaType::Double,   94,

 // methods: parameters
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 102, 0x80000000 | 9, 0x80000000 | 9,  103,  104,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Bool, QMetaType::QObjectStar,   10,
    QMetaType::Void, QMetaType::QUrl,  106,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Void, QMetaType::Bool,  108,

 // properties: name, type, flags
     110, QMetaType::Double, 0x00095001,
     111, QMetaType::Bool, 0x00095003,
     112, QMetaType::Bool, 0x00095003,
     113, QMetaType::Bool, 0x00495003,
     114, QMetaType::Bool, 0x00095003,
     115, QMetaType::Bool, 0x00095003,
     116, QMetaType::Bool, 0x00095003,
     117, QMetaType::Bool, 0x00495003,
     118, QMetaType::Bool, 0x00095003,
     119, QMetaType::Bool, 0x00095103,
     120, QMetaType::Bool, 0x00095103,
     121, QMetaType::Bool, 0x00095103,
     122, QMetaType::Bool, 0x00095103,
     123, QMetaType::Bool, 0x00095103,
     124, QMetaType::Bool, 0x00095103,
     125, QMetaType::Bool, 0x00095103,
     126, QMetaType::Bool, 0x00095103,
     127, QMetaType::Bool, 0x00095003,
     128, QMetaType::Int, 0x00095103,
     129, QMetaType::Double, 0x00095103,
     130, QMetaType::QString, 0x00495001,
     131, QMetaType::QDateTime, 0x00495103,
     132, QMetaType::Double, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
     133, QMetaType::Double, 0x00495103,
     134, QMetaType::Double, 0x00495103,
      55, 0x80000000 | 54, 0x0009510b,
     135, QMetaType::Int, 0x00095103,
     136, QMetaType::Double, 0x00095103,
     137, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       8,
       0,
       0,
       0,
       7,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       3,
       5,
       6,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      54,   54, 0x0,    4,  759,

 // enum data: key, value
     138, uint(UniverseView::Mono),
     139, uint(UniverseView::SideBySide),
     140, uint(UniverseView::AnaglyphRedCyan),
     141, uint(UniverseView::AnaglyphCyanRed),

       0        // eod
};

void UniverseView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UniverseView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeChanged(); break;
        case 1: _t->simulationDateTimeChanged(); break;
        case 2: _t->timeScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->pauseStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->contextMenuTriggered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< BodyObject*(*)>(_a[3]))); break;
        case 5: _t->limitingMagnitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->ambientLightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->equatorialGridVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->centerIndicatorVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->recordingVideoChanged(); break;
        case 10: _t->recordedVideoLengthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->tick(); break;
        case 12: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setCurrentTime(); break;
        case 14: _t->setTimeScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setSimulationTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setSimulationDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 17: _t->inertialObserver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->bodyFixedObserver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->synodicObserver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->lockedObserver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setObserverCenter(); break;
        case 22: _t->setMilkyWayVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->setPlanetOrbitsVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setEquatorialGridVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setEclipticVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setEquatorialPlaneVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setPlanetographicGridVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setConstellationFigureVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setConstellationNameVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setStarNameVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setLabelVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setSurfaceFeatureLabelVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->setCenterIndicatorVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->setShadows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->setEclipseShadows((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->setCloudsVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->setAtmospheresVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->setAmbientLight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->setAmbientLight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: _t->setReflections((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setStereoMode((*reinterpret_cast< StereoMode(*)>(_a[1]))); break;
        case 42: _t->setAntialiasingSamples((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->setSunGlare((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setDiffractionSpikes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setEarthMapMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->setInfoText((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->plotTrajectory((*reinterpret_cast< vesta::Entity*(*)>(_a[1])),(*reinterpret_cast< const BodyInfo*(*)>(_a[2]))); break;
        case 48: _t->plotTrajectoryObserver((*reinterpret_cast< const BodyInfo*(*)>(_a[1]))); break;
        case 49: _t->clearTrajectoryPlots((*reinterpret_cast< vesta::Entity*(*)>(_a[1]))); break;
        case 50: { bool _r = _t->hasTrajectoryPlots((*reinterpret_cast< vesta::Entity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setSelectedBody((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->gotoSelectedObject(); break;
        case 53: _t->centerSelectedObject(); break;
        case 54: _t->gotoHome(); break;
        case 55: _t->setViewpoint((*reinterpret_cast< Viewpoint*(*)>(_a[1]))); break;
        case 56: _t->setTimeDisplay((*reinterpret_cast< TimeDisplayMode(*)>(_a[1]))); break;
        case 57: _t->setLimitingMagnitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 58: _t->setUpdateInterval((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 59: _t->findObject(); break;
        case 60: _t->setGalleryVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->toggleGallery(); break;
        case 62: _t->copyNextFrameToClipboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->copyNextFrameToClipboard(); break;
        case 64: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->setFOV((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 66: { BodyObject* _r = _t->getSelectedBody();
            if (_a[0]) *reinterpret_cast< BodyObject**>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setSelectedBody((*reinterpret_cast< BodyObject*(*)>(_a[1]))); break;
        case 68: { BodyObject* _r = _t->getCentralBody();
            if (_a[0]) *reinterpret_cast< BodyObject**>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setCentralBody((*reinterpret_cast< BodyObject*(*)>(_a[1]))); break;
        case 70: _t->setCentralBodyFixed((*reinterpret_cast< BodyObject*(*)>(_a[1]))); break;
        case 71: _t->trackBody((*reinterpret_cast< BodyObject*(*)>(_a[1]))); break;
        case 72: _t->trackBodyLevel((*reinterpret_cast< BodyObject*(*)>(_a[1]))); break;
        case 73: { VisualizerObject* _r = _t->createBodyDirectionVisualizer((*reinterpret_cast< BodyObject*(*)>(_a[1])),(*reinterpret_cast< BodyObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< VisualizerObject**>(_a[0]) = std::move(_r); }  break;
        case 74: _t->plotTrajectory((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 75: _t->clearTrajectoryPlots((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 76: { bool _r = _t->hasTrajectoryPlots((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setStateFromUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 78: _t->setMouseClickEventProcessed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->setMouseMoveEventProcessed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BodyObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UniverseView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::timeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::simulationDateTimeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::timeScaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::pauseStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(int , int , BodyObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::contextMenuTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::limitingMagnitudeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::ambientLightChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::equatorialGridVisibilityChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::centerIndicatorVisibilityChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::recordingVideoChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (UniverseView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UniverseView::recordedVideoLengthChanged)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UniverseView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->realTime(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->labelVisibility(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->surfaceFeatureLabelVisibility(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->centerIndicatorVisibility(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->constellationFigureVisibility(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->constellationNameVisibility(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->starNameVisibility(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->equatorialGridVisibility(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->eclipticVisibility(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->shadows(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->eclipseShadows(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->reflections(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->cloudsVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->atmospheresVisible(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->sunGlare(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->diffractionSpikes(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->milkyWayVisible(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->planetOrbitsVisibility(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->earthMapMonth(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->simulationTime(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->currentTimeString(); break;
        case 21: *reinterpret_cast< QDateTime*>(_v) = _t->simulationDateTime(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->timeScale(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->isPaused(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->limitingMagnitude(); break;
        case 25: *reinterpret_cast< double*>(_v) = _t->ambientLight(); break;
        case 26: *reinterpret_cast< StereoMode*>(_v) = _t->stereoMode(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->antialiasingSamples(); break;
        case 28: *reinterpret_cast< double*>(_v) = _t->gotoObjectTime(); break;
        case 29: *reinterpret_cast< bool*>(_v) = _t->isGalleryVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UniverseView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLabelVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSurfaceFeatureLabelVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCenterIndicatorVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setConstellationFigureVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setConstellationNameVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setStarNameVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setEquatorialGridVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setEclipticVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShadows(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setEclipseShadows(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setReflections(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setCloudsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setAtmospheresVisible(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setSunGlare(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setDiffractionSpikes(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setMilkyWayVisible(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setPlanetOrbitsVisibility(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setEarthMapMonth(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setSimulationTime(*reinterpret_cast< double*>(_v)); break;
        case 21: _t->setSimulationDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 22: _t->setTimeScale(*reinterpret_cast< double*>(_v)); break;
        case 23: _t->setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setLimitingMagnitude(*reinterpret_cast< double*>(_v)); break;
        case 25: _t->setAmbientLight(*reinterpret_cast< double*>(_v)); break;
        case 26: _t->setStereoMode(*reinterpret_cast< StereoMode*>(_v)); break;
        case 27: _t->setAntialiasingSamples(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setGotoObjectTime(*reinterpret_cast< double*>(_v)); break;
        case 29: _t->setGalleryVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UniverseView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_UniverseView.data,
    qt_meta_data_UniverseView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UniverseView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UniverseView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UniverseView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UniverseView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 30;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 30;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UniverseView::timeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void UniverseView::simulationDateTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UniverseView::timeScaleChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UniverseView::pauseStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UniverseView::contextMenuTriggered(int _t1, int _t2, BodyObject * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UniverseView::limitingMagnitudeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UniverseView::ambientLightChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UniverseView::equatorialGridVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UniverseView::centerIndicatorVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UniverseView::recordingVideoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void UniverseView::recordedVideoLengthChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
