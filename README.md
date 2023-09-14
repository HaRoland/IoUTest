# IoU Testing

## Structure

Collection of mature IoU algorithms/modules in third libraries.
Design a cluster of baseline algorithms(bl).
Design of 2D/3D bounding box simulation.
Blank runtime, precision, memory of each algorithms.

-----------------

- /src/utils.cc -> utilities
- /src/bl.cc -> baseline algortithms
- /src/shapely.cc -> shapely library 
- /src/clipper.cc -> clipper2 library 
- /src/GPC.cc -> general polygpn clipper library
- /src/cv.cc -> opencv library

- /src/collection.cc -> iou calculation source code from each library

- /src/bboxSim2D.cc -> Simulate 2D bbox data  
- /src/bboxSim3D.cc -> Simulate 3D bbox data  

------------------

- /Test/vl.cc -> validate third libraries' algorithms 
- /Test/moduleTest2D.cc -> test third libraries' algorithms in 2D bbox
- /Test/moduleTest3D.cc -> test third libraries' algorithms in 3D bbox
- /Test/blTest2D.cc -> test baseline algorithms in 2D bbox
- /Test/blTest3D.cc -> test baseline algorithms in 3D bbox

------------------

- /util/vis.cc -> result visualization
- /util/export.cc -> result export
- /util/toDLL.cc -> preperation to make best algorithm module

------------------

- /include/iou.h -> iou.h

- /include/utils.h -> util.h
- /include/shapely.h -> shapely headers
- /include/clipper.h -> clipper headers
- /include/GPC.h -> GPC headers
- /include/cv.h -> opencv headers

- /include/testvl.h -> header of testing validation of third libraries' algorithms 
- /include/dataSim.h -> header of data simulation module
- /include/moduleTest.h -> header of module test

- /include/utilvis.h -> header of visualization utility
- /include/utilexp.h -> header of result exporting utility
- /include/utiltoDLL.h -> header of making DLL utility

-------------------





