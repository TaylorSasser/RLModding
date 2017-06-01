#pragma once

typedef void (*tEventMethod)(void** obj,void* func,void* params);

template<tEventMethod function> 
class Event {
	private:
	void** UObject;
	void*  UFunction;
	void*  params;
	public:
		Event<tEventMethod>() {};
		void Event::Invoke(void** object, void* func, void* parameters) {
			function(UObject,UFunction,params);
		}
};

