#pragma once
namespace StarTrek {
class Shield {
	public:
		enum State { SHIELDDOWN, SHIELDUP };
		Shield();
		~Shield();

		bool isShieldUp() const;

		void toggleShield(bool shieldState);
		
	private:
		State state = State::SHIELDDOWN;
};
}