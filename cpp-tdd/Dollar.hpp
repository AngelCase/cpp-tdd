#pragma once

namespace money {
	class Dollar {
	public:
		int amount;
		Dollar(int amount) {
			this->amount = amount;
		}
		void times(int multiplier) {
			amount *= multiplier;
		}
	};
}
