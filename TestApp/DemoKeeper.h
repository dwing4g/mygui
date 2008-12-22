/*!
	@file
	@author		Albert Semenov
	@date		08/2008
	@module
*/
#ifndef __DEMO_KEEPER_H__
#define __DEMO_KEEPER_H__

#include "Base/BaseManager.h"
#include "KinematicalObject.h"
#include "AbilityObject.h"

namespace demo
{

	class DemoKeeper : public base::BaseManager
	{
	public:
		virtual void createScene();
		virtual void destroyScene();
		virtual bool keyPressed( const OIS::KeyEvent &arg );
		virtual bool keyReleased( const OIS::KeyEvent &arg );
		virtual bool frameStarted(const Ogre::FrameEvent& evt);

	private:
		void notifyMouseButtonClick(MyGUI::WidgetPtr _sender);
		void createBot(const Ogre::Vector3& _position);

	private:
		sim::KinematicalObject * mKinematical;
		sim::AbilityObject * mAbility;
		std::vector<sim::IBase*> mSimulationObjects;
	};

} // namespace demo

#endif // __DEMO_KEEPER_H__
