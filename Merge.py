def merge_queues(self, queue2):
    while not queue2.is_empty() and not self.is_full():
        self.enqueue(queue2.dequeue())
