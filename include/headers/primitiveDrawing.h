#ifndef primitiveDrawing_h
#define primitiveDrawing_h

   #pragma once

   #include <iostream>
   #include <SDL.h>
   #include <SDL_image.h>

   inline static void drawRectangle(int x, int y, int w, int h, SDL_Color color, SDL_Renderer* renderer) {
      SDL_Rect rect;
      rect.x = x;
      rect.y = y;
      rect.w = w;
      rect.h = h;

      SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
      SDL_RenderDrawRect(renderer, &rect);
      SDL_RenderFillRect(renderer, &rect);
   };

#endif