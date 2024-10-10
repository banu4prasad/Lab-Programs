def schedule_subjects(subjects, days, constraints):
    #creating a conflit map
    conflict_map = {subject: set() for subject in subjects}
    for subject1, subject2 in constraints:
        conflict_map[subject1].add(subject2)
        conflict_map[subject2].add(subject1)
    #creating a schedule dictinonary to hold assignments
    schedule = {}

    #backtracking function
    def assign_subjects(index):
        #base case all subjects have been assigned
        if index == len(subjects):
            return True
        subject = subjects[index]
        #try to assign each day
        for day in days:
            #check for conflits
            if not any (scheduled_day==day for s, scheduled_day in schedule.items() if s in conflict_map[subject]):
                #assign the subject to the day
                schedule[subject] = day
                #recursively assign the next subject
                if assign_subjects(index + 1):
                    return True
                #backtrack
                del schedule[subject]
        return False
    #start the backtracking
    if assign_subjects(0):
        return schedule
    else:
        return "no valid schedule found"
    
#input example
subjects = ["math", "english", "history", "science"]
days = ["Monday", "Tuesday", "Wednesday"]
constraints = [("math", "english"), ("english", "history"), ("history", "science")]
result = schedule_subjects(subjects, days, constraints)
print(result)