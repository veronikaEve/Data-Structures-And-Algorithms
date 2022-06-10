class Entity {
	public:
		int size;
		Entity(int s):size(s){}

		Entity operator++();
		Entity operator--();
		bool operator>(Entity&);
		bool operator<(Entity&);
};

Entity Entity::operator++() {
	return Entity(++this->size); // or Entity(this->size++);
}

Entity Entity::operator--() {
	return Entity(--this->size);
}

bool Entity::operator>(Entity& rhd) {
	return this->size > rhd.size;
}

bool Entity::operator<(Entity& rhd) {
	return this->size < rhd.size;
}
