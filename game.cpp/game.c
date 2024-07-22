

pygame;
 random Pygame
pygame.init()

#Screen dimensions
screen_width = 800
screen_height = 600
screen = pygame.display.set_mode((screen_width, screen_height))

#Colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)


player_size = 50
player_pos = [screen_width // 2, screen_height - 2 * player_size]
enemy_size = 50
enemy_pos = [random.randint(0, screen_width - enemy_size), 0]
enemy_list = [enemy_pos]
speed = 10


clock = pygame.time.Clock()


font = pygame.font.SysFont("monospace", 35)

def detect_collision(player_pos, enemy_pos):
    p_x, p_y = player_pos
    e_x, e_y = enemy_pos

    if (e_x >= p_x and e_x < (p_x + player_size)) or (p_x >= e_x and p_x < (e_x + enemy_size)):
        if (e_y >= p_y and e_y < (p_y + player_size)) or (p_y >= e_y and p_y < (e_y + enemy_size)):
            return True
    return False

def drop_enemies(enemy_list):
    delay = random.random()
    if len(enemy_list) < 10 and delay < 0.1:
        x_pos = random.randint(0, screen_width - enemy_size)
        y_pos = 0
        enemy_list.append([x_pos, y_pos])

def update_enemy_positions(enemy_list, speed):
    for idx, enemy_pos in enumerate(enemy_list):
        if enemy_pos[1] >= 0 and enemy_pos[1] < screen_height:
            enemy_pos[1] += speed
        else:
            enemy_list.pop(idx)

def draw_enemies(enemy_list):
    for enemy_pos in enemy_list:
        pygame.draw.rect(screen, red, (enemy_pos[0], enemy_pos[1], enemy_size, enemy_size))


game_over = False
while not game_over:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True

    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and player_pos[0] > 0:
        player_pos[0] -= speed
    if keys[pygame.K_RIGHT] and player_pos[0] < screen_width - player_size:
        player_pos[0] += speed

    screen.fill(black)

    drop_enemies(enemy_list)
    update_enemy_positions(enemy_list, speed)

    if detect_collision(player_pos, enemy_pos):
        game_over = True

    draw_enemies(enemy_list)

    pygame.draw.rect(screen, white, (player_pos[0], player_pos[1], player_size, player_size))

    pygame.display.update()
    clock.tick(30)

pygame.quit()
