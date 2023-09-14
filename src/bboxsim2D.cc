// Generate 2D bbox simulation data

#include "datasim.h"
// 2D scheme requires 4 coordinates bbox

namespace datasim
{
    class bboxsim2D : datasim::Vehicle
    {
    private:
        // Vehicle v;
        // float *Cod = v.getBbox();
        std::vector<std::pair<double, double>> pointList;

    public:
        // Restrict center points inside square [-scale,scale]
        iou::POS centerPointGenerator(int scale);
        

    };

    iou::POS bboxsim2D::centerPointGenerator(int scale)
    {
        datasim::centerpointGenerator cPG(10);
        pointList = cPG.getRandom(scale);
        for (auto t = pointList.begin(); t != pointList.end(); t++)
        {
            std::cout << t->first << t->second << std::endl;
        }
        return std::make_pair(0.0,0.0);
    }
    void test()
    {
        datasim::bboxsim2D b2;
        std::cout<<"  ||||||||||   "<<std::endl;
        b2.centerPointGenerator(100);
    }


}

