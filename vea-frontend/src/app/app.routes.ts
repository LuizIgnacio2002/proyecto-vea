import { Routes } from '@angular/router';
import { HomeComponent } from './home/home.component';
import { DetallesCarritoComponent } from './detalles-carrito/detalles-carrito.component';
import { ConfiguracionComponent } from './configuracion/configuracion.component';
import { HistorialComponent } from './historial/historial.component';
import { AnaliticasComponent } from './analiticas/analiticas.component';

export const routes: Routes = [
    {
        path: '',
        component: HomeComponent,
        title: "VEA"
    },
    {
        path:'carrito/:id',
        component: DetallesCarritoComponent,
        title: "Detalles Carrito"
    },  
    {
        path:'configuracion',
        component: ConfiguracionComponent,
        title: "Configuración"
    },
    {
        path: 'historial',
        component: HistorialComponent,
        title: "Historial"
    },
    {
        path: 'analiticas',
        component: AnaliticasComponent,
        title: "Analiticas"
    }
];
