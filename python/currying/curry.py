# Currying

def buildInfo(name):
    def buildInfoSub(age):
        return name + ' ' + age
    return buildInfoSub

person = buildInfo('John')('28')

print(person)
