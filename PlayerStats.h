#pragma once
#include <iostream>
#include <string> // std::string
#include <set> //std::set

struct PlayerStruct
{
	int kickAccuracy{};
	int kickBravery{};
	int kickPower{};
	int kickTechnique{};
	int composure{};
};

class Player
{

public:
    // information
    int m_age{};
    int m_weight{};
    double m_height{};
    int m_footed{}; // 0 = right, 1 = left 2 = both
    std::string m_placeOfBirth{};
    std::string m_nationality{};
    std::set<std::string> m_eligibleNations{};

    int m_kickAccuracy{};
    int m_kickPower{};
    int m_placementKicking{};

    // hidden stats
    int m_bigMomentKicking{};
    int m_kickoffMatchConfidence{}; // confidence at kickoff based on recent form
    int m_matchConfidence{}; // successive kicks improve match confidence

    void printPlayerStats() // defines a member function named print()
    {
        std::cout << "Age: " << m_age << std::endl;
        std::cout << "Weight: " << m_weight << " kg" << std::endl;
        std::cout << "Height: " << m_height << " m" << std::endl;

        switch(m_footed)
               {
               case 0:
            	   std::cout << "Favoured foot: Right" << std::endl;
            	   break;
               case 1:
            	   std::cout << "Favoured foot: Left" << std::endl;
            	   break;
               case 2:
            	   std::cout << "Favoured foot: Either" << std::endl;
            	   break;
               default:
            	   std::cout << "Favoured foot: Right" << std::endl;
            	   break;
               }

        // std::cout << "Footed: " << m_footed<< std::endl; // 0 = right, 1 = left, 2 = both
        std::cout << "Place of Birth: " << m_placeOfBirth << std::endl;
        std::cout << "Nationality: " << m_nationality << std::endl;
        std::cout << "Eligible Nations:";



        for (auto it = m_eligibleNations.begin(); it !=
            m_eligibleNations.end(); ++it)
            std::cout << ' ' << *it;
        std::cout << std::endl;
    }
};
