#include <boost/test/unit_test.hpp>

#include "../../src/shared/state/Cursor.h"

using namespace ::state;

BOOST_AUTO_TEST_CASE(TestPlayer)
{

	Player p {};
	BOOST_CHECK_EQUAL(p.getX(), 0);
	p.setX(99);
	BOOST_CHECK_EQUAL(p.getX(), 99);
	
	BOOST_CHECK_EQUAL(p.getY(), 0);
	p.setY(99);
	BOOST_CHECK_EQUAL(p.getY(), 99);
	
	BOOST_CHECK_EQUAL(p.getDirection(), 0);
	p.setDirection(NORTH);
	BOOST_CHECK_EQUAL(p.getDirection(), NORTH);

	BOOST_CHECK_EQUAL(p.getPlayerId(), 0);
	p.setPlayerId(99);
	BOOST_CHECK_EQUAL(p.getPlayerId(), 99);
	
	BOOST_CHECK_EQUAL(p.getHp(), 0);
	p.setHp(99);
	BOOST_CHECK_EQUAL(p.getHp(), 99);
	
	BOOST_CHECK_EQUAL(p.getMovement(), 0);
	p.setMovement(99);
	BOOST_CHECK_EQUAL(p.getMovement(), 99);
	
	BOOST_CHECK_EQUAL(p.getInitiative(), 0);
	p.setInitiative(99);
	BOOST_CHECK_EQUAL(p.getInitiative(), 99);
	
	BOOST_CHECK_EQUAL(p.getSkillCount(), 0);
	p.setSkillCount(99);
	BOOST_CHECK_EQUAL(p.getSkillCount(), 99);
	
	BOOST_CHECK_EQUAL(p.getAttackBase(), 0);
	p.setAttackBase(99);
	BOOST_CHECK_EQUAL(p.getAttackBase(), 99);
	
	BOOST_CHECK_EQUAL(p.getSkillCount(), 0);
	p.setSkillCount(99);
	BOOST_CHECK_EQUAL(p.getSkillCount(), 99);
	
	BOOST_CHECK_EQUAL(p.getIa(), 0);
	p.setIa(1);
	BOOST_CHECK_EQUAL(p.getIa(), 1);
	
	BOOST_CHECK_EQUAL(p.getStatus(), 0);
	p.setStatus({{BURNED,7},{POISONED,7}});
	BOOST_CHECK_EQUAL(p.getStatus(), {{BURNED,7},{POISONED,7}});
}