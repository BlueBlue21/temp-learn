from cs1robots import Robot, create_world


def main():
    print("Hello, world!")

    create_world()
    hubo = Robot(beepers=1)

    def turn_right():
        for _ in range(3):
            hubo.turn_left()

    hubo.move()
    hubo.turn_left()
    turn_right()


if __name__ == "__main__":
    main()
