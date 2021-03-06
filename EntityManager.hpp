//
// Created by BlackFlage on 30.11.2021.
//

#ifndef ECS_ENTITYMANAGER_HPP
#define ECS_ENTITYMANAGER_HPP

#include <queue>
#include <bitset>
#include <array>
#include "Types.hpp"

class EntityManager
{
public:
    EntityManager();

    Entity create_entity();
    void destroy_entity(const Entity& a_entity);

    Signature get_signature(const Entity& a_entity);
    void set_signature(const Entity& a_entity, const Signature& a_signature);
private:
    std::queue<Entity> m_available_entities;

    std::array<Signature, MAX_ENTITIES> m_signatures;

    std::uint16_t m_used_entities;
};

#endif //ECS_ENTITYMANAGER_HPP
