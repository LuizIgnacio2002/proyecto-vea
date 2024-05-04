import { ComponentFixture, TestBed } from '@angular/core/testing';

import { DetallesCarritoComponent } from './detalles-carrito.component';

describe('DetallesCarritoComponent', () => {
  let component: DetallesCarritoComponent;
  let fixture: ComponentFixture<DetallesCarritoComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [DetallesCarritoComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(DetallesCarritoComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
