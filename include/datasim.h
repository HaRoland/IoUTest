// Confirm data structure of 2D/3D bbox simulation
#pragma once
#include <utility>
#include <cstdlib>
#include <random>
#include "iou.h"

namespace datasim
{

    // RealType
    // A floating-point type. Aliased as member type result_type.
    // By default, this is double.
    template <class RealType = double>
    class uniform_real_distribution;

    // For vehicles scheme, 4 coordinates given confirms a bbox
    // Orientation to be defined

    class Vehicle
    {
    private:
        float Xcod[4] = {};
        float Ycod[4] = {};
        float Ori = 0.0;

        bool is_segement = 0;
        bool is_movable = 0;

    public:
        inline std::pair<float*,float*> getBbox()
        {
            return std::make_pair(Xcod,Ycod);
        }
        float getOri()
        {
            return Ori;
        }
        float getIsSeg()
        {
            return is_segement;
        }
        float getIsMovable()
        {
            return is_movable;
        }

        ~Vehicle();
    };

    class Bbox
    {
        Bbox();
        ~Bbox();
    };

    // Generante Center Points in given scale
    // getRandom function is the core function in the class which returns the vector of N random number in a given scale

    class centerpointGenerator
    {
    private:
        int LOWER = -1;   // lower boundary of random space
        int UPPER = 1;   // upper boundary of random space
        int DEFAULT = 1; // default scalable index
        int SCALE = 1;   // the needed size of bbox generating space
    public:
        centerpointGenerator(int S); // Scalable rectagular
        ~centerpointGenerator();
        void changeDefault(int D);                               // get new Default value
        std::vector<std::pair<double, double>> getRandom(int N); // needed random amount in a row
    };

    centerpointGenerator::centerpointGenerator(int scale)
    {
        SCALE = scale;
        LOWER = -DEFAULT * SCALE;
        UPPER = DEFAULT * SCALE;
    }

    centerpointGenerator::~centerpointGenerator()
    {
    }

    std::vector<std::pair<double, double>> centerpointGenerator::getRandom(int cnt)
    {
        std::default_random_engine e;
        std::uniform_real_distribution<double> u(LOWER, UPPER);
        std::vector<std::pair<double, double>> rN;
        for (int i = 0; i < cnt; i++)
        {
            rN.emplace_back(std::make_pair(u(e), u(e)));
        }
        return rN;
    }

    void centerpointGenerator::changeDefault(int newDefault = 1)
    {
        DEFAULT = newDefault;
    }

}