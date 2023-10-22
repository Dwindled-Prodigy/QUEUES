std::vector<int> toArray() {
    std::vector<int> result;
    if (isEmpty()) {
        return result;
    }
    for (int i = front; i <= rear; i++) {
        result.push_back(array[i]);
    }
    return result;
}
